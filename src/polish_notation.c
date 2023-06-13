#include "polish_notation.h"
#include "data_structures.h"

int parse_input_str(char *str, queue *queued_str);
queue *input_to_polish(queue *input, int *er);
double calculate(queue *polish_str, double x_val);

int calculate_polish(char *str, double x_val, double *result) {
  int er = 0;
  queue queued_str;
  er = parse_input_str(str, &queued_str);
  if (!er) {
    queue *polish_str = input_to_polish(&queued_str, &er);
    if (!er) {
    *result = calculate(polish_str, x_val);
    remove_queue(polish_str);
    } else {
      remove_queue(&queued_str);
    }
  }
  return er;
}

int parse_input_str(char *str, queue *queued_str) {
  if (!str || *str == '\0') {
    return FAILURE;
  }
  int just_read = 0;
  queue queued_str;
  int action_priority = 0;
  double value = 0;
  int action = 0;
  int er = SUCCESS;
  if (!(er = create_info(&action_priority, &value, &action, str, &just_read))) {
    queued_str = queue_init(action_priority, value, action);
    str += just_read;
    just_read = 0;
    while (!create_info(&action_priority, &value, &action, str, &just_read) && er == 0) {
      if (action_priority == 0 && (action == '+' || action == '-') &&
          queued_str->action_priority == 0) {
        int minus = action == '-' ? -1 : 1;
        if (!create_info(&action_priority, &value, &action, str, &just_read)) {
          if (action_priority == 0 && (action == '*' || action == '/' || action == '+' ||
                              action == '-' || action == '^')) {
            er = 1;
          } else {
            add_node_to_queue(&queued_str, action_priority, minus * value, action);
            str += just_read;
            just_read = 0;
          }
        } else {
          er = FAILURE;
        }
      } else {
        add_node_to_queue(&queued_str, action_priority, value, action);
        str += just_read;
        just_read = 0;
      }
    }
  }
  return er;
}



queue *input_to_polish(queue *input, int *er) {
  if (!(input->action_priority == 1 || input->action_priority == 2)) {
    return FAILURE;
  }
  stack *st = {0};
  queue *result = queue_init(input->action_priority, input->value, input->action);
  remove_node_from_queue(&input);
  while (input && !*er) {
    if (input->action_priority == 0 || input->action_priority == -1) {
      add_node_to_queue(result, input->action_priority, input->value, input->action);
      remove_node_from_queue(&input);
    } else {
      if (st == NULL) {
        st = stack_init(input->action_priority, input->value, input->action);
        remove_node_from_queue(&input);
      } else {
        if (input->action == '(') {
          push(&st, input->action_priority, input->value, input->action);
        }
        else if (input->action == ')') {
          while(st->action != '(' && st->prev != NULL) {
            add_node_to_queue(result, input->action_priority, input->value, input->action);
            remove_element_from_stack(&st);
          }
          if (st->action != '(') {
            *er = 1;
          }
          remove_element_from_stack(&st);
        }
        else if (input->action_priority >= st->action_priority) {
          push(&st, input->action_priority, input->value, input->action);
        }
        else if (input->action_priority < st->action_priority) {
          while (input->action_priority < st->action_priority && st) {
          add_node_to_queue(result, st->action_priority, st->value, st->action);
          remove_element_from_stack(&st);
          }
          push(&st, input->action_priority, input->value, input->action);
          remove_element_from_queue(&input);
        }
      }
    }
  }
  while (st) {
    add_node_to_queue(result, st->action_priority, st->value, st->action);
    remove_element_from_stack(&st);
  } 
  return result;
}