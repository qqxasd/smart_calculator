#include "polish_notation.h"

int parse_input_str(char *str, queue **queued_str, double x_val);
queue *input_to_polish(queue *input, int *er);
int calculate(queue *polish_str, double *result);

int calculate_polish(char *str, double x_val, double *result) {
  queue *queued_str = {0};
  int er = parse_input_str(str, &queued_str, x_val);
  if (!er) {
    queue *polish_str = input_to_polish(queued_str, &er);
    if (!er) {
      er = calculate(polish_str, result);
    }
  }
  return er;
}

void init_or_push_stack(stack **st, int action_priority, double value,
                        int action) {
  if (*st == NULL) {
    (*st) = stack_init(action_priority, value, action);
  } else {
    push(st, action_priority, value, action);
  }
}

void init_or_push_to_queue(queue **q, int action_priority, double value,
                           int action) {
  if ((*q) == NULL) {
    (*q) = queue_init(action_priority, value, action);
  } else {
    add_node_to_queue(*q, action_priority, value, action);
  }
}

int action_execute(queue **polish_str, stack **st) {
  int er = SUCCESS;
  int action_priority = 0;
  double value = 0;
  int action = 0;
  double res_val = 0;
  if (*st == NULL) {
    er = FAILURE;
  } else {
    action_priority = (*st)->action_priority;
    value = (*st)->value;
    action = (*st)->action;
    remove_element_from_stack(st);
  }
  if (er == SUCCESS &&
      ((*polish_str)->action_priority > 4 || (*polish_str)->action == SQRT)) {
    if ((*polish_str)->action == SQRT) {
      res_val = sqrt(value) * (*polish_str)->value;
    } else if ((*polish_str)->action == SIN) {
      res_val = sin(value) * (*polish_str)->value;
    } else if ((*polish_str)->action == ACOS) {
      res_val = acos(value) * (*polish_str)->value;
    } else if ((*polish_str)->action == COS) {
      res_val = cos(value) * (*polish_str)->value;
    } else if ((*polish_str)->action == ASIN) {
      res_val = asin(value) * (*polish_str)->value;
    } else if ((*polish_str)->action == LN) {
      res_val = log(value) * (*polish_str)->value;
    } else if ((*polish_str)->action == LOG) {
      res_val = log10(value) * (*polish_str)->value;
    } else if ((*polish_str)->action == TG || (*polish_str)->action == TAN) {
      res_val = tan(value) * (*polish_str)->value;
    } else if ((*polish_str)->action == CTG) {
      res_val = cos(value) / sin(value) * (*polish_str)->value;
    } else if ((*polish_str)->action == ATAN) {
      res_val = atan(value) * (*polish_str)->value;
    }
  } else if (er == SUCCESS) {
    if ((*st) == NULL) {
      er = FAILURE;
    } else {
      if ((*polish_str)->action == '*') {
        res_val = (*st)->value * value;
      } else if ((*polish_str)->action == '/') {
        res_val = (*st)->value / value;
      } else if ((*polish_str)->action == '+') {
        res_val = (*st)->value + value;
      } else if ((*polish_str)->action == '-') {
        res_val = (*st)->value - value;
      } else if ((*polish_str)->action == '^') {
        res_val = pow((*st)->value, value);
      } else if ((*polish_str)->action == MOD) {
        res_val = (int)(*st)->value % (int)value;
      }
      remove_element_from_stack(st);
    }
  } else {
    er = 1;
  }
  init_or_push_stack(st, 0, res_val, 0);
  remove_node_from_queue(polish_str);
  return er;
}

int calculate(queue *polish_str, double *result) {
  int er = SUCCESS;
  stack *st = NULL;
  while (polish_str != NULL && !er) {
    if (polish_str->action_priority == 0) {
      init_or_push_stack(&st, polish_str->action_priority, polish_str->value,
                         polish_str->action);
      remove_node_from_queue(&polish_str);
    } else {
      er = action_execute(&polish_str, &st);
    }
  }
  *result = st->value;
  return er;
}

int parse_input_str(char *str, queue **queued_str, double x_val) {
  if (!str || *str == '\0') {
    return FAILURE;
  }
  int action_priority = 0;
  double value = 0;
  int action = 0;
  int minus = 1;
  int action_priority_last = 0;
  int er = SUCCESS;
  if (!(er = create_info(&action_priority, &value, &action, &str, minus,
                         x_val))) {
    if (action_priority == 0 || action_priority == 5 || action_priority == 4) {
      *queued_str = queue_init(action_priority, value, action);
      action_priority_last = action_priority, action = 0, value = 0,
      action_priority = 0;
    } else if (action_priority == 1) {
      if (action == '(') {
        *queued_str = queue_init(action_priority, value, action);
        action_priority_last = action_priority, action = 0, value = 0,
        action_priority = 0;
      } else
        er = 1;
    } else {
      minus = action == '-' ? -1 : 1;
      action = 0, action_priority = 0;
    }
    while (*str && !er &&
           !(er = create_info(&action_priority, &value, &action, &str, minus,
                              x_val))) {
      if (action_priority == 2 && (*queued_str) != NULL &&
          action_priority_last != 0 && action_priority_last != 1) {
        minus *= (*queued_str)->action == '-' ? 1 : -1;
        action = 0, action_priority = 0;
        while (*str == ' ') {
          str++;
        }
      } else {
        init_or_push_to_queue(queued_str, action_priority, value, action);
        action_priority_last = action_priority, action = 0, value = 0,
        action_priority = 0, minus = 1;
        while (*str == ' ') {
          str++;
        }
      }
    }
  }
  return er;
}

void parse_operator(queue **input, stack **st, queue **result, int *er) {
  if ((*input)->action == '(') {
    push(st, (*input)->action_priority, (*input)->value, (*input)->action);
    remove_node_from_queue(input);
  } else if ((*input)->action == ')') {
    while ((*st)->action != '(' && (*st)->prev != NULL) {
      init_or_push_to_queue(result, (*st)->action_priority, (*st)->value,
                            (*st)->action);
      remove_element_from_stack(st);
    }
    if ((*st)->action != '(') {
      *er = 1;
    }
    remove_element_from_stack(st);
    remove_node_from_queue(input);
  } else if ((*input)->action_priority >= (*st)->action_priority) {
    push(st, (*input)->action_priority, (*input)->value, (*input)->action);
    remove_node_from_queue(input);
  } else if ((*input)->action_priority < (*st)->action_priority) {
    while (*st && (*input)->action_priority < (*st)->action_priority) {
      init_or_push_to_queue(result, (*st)->action_priority, (*st)->value,
                            (*st)->action);
      remove_element_from_stack(st);
    }
    push(st, (*input)->action_priority, (*input)->value, (*input)->action);
    remove_node_from_queue(input);
  }
}

queue *input_to_polish(queue *input, int *er) {
  if ((input->action_priority == 3 || input->action == '^')) {
    *er = FAILURE;
    return NULL;
  }
  stack *st = {0};
  queue *result = {0};
  if (input->action_priority != 0) {
    init_or_push_stack(&st, input->action_priority, input->value,
                       input->action);
    remove_node_from_queue(&input);
  }
  while (input && !*er) {
    if (input->action_priority == 0) {
      init_or_push_to_queue(&result, input->action_priority, input->value,
                            input->action);
      remove_node_from_queue(&input);
    } else {
      if (st == NULL) {
        st = stack_init(input->action_priority, input->value, input->action);
        remove_node_from_queue(&input);
      } else {
        parse_operator(&input, &st, &result, er);
      }
    }
  }
  while (st) {
    init_or_push_to_queue(&result, st->action_priority, st->value, st->action);
    remove_element_from_stack(&st);
  }
  return result;
}
