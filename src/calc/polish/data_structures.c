#include "data_structures.h"

int action_priority;
double value;
char action;

stack *stack_init(int action_priority, double value, int action) {
  stack *s = malloc(sizeof(stack));
  s->prev = NULL;
  s->action_priority = action_priority;
  s->value = value;
  s->action = action;
  return s;
}

void stack_remove(stack *s) {
  while (s != NULL) {
    void *prev = s->prev;
    free(s);
    s = prev;
  }
}

void remove_element_from_stack(stack **s) {
  void *tmp = (*s)->prev;
  free(*s);
  *s = tmp;
}

// void pop(stack **st, int action_priority, double value, int action) {
//   action_priority = (*st)->action_priority;
//   action = (*st)->action;
//   value = (*st)->value;
//   *st = (*st)->prev;
// }

void push(stack **st, int action_priority, double value, int action) {
  stack *new = malloc(sizeof(stack));
  new->action_priority = action_priority;
  new->value = value;
  new->action = action;
  new->prev = *st;
  *st = new;
}

queue *queue_init(int action_priority, double value, int action) {
  queue *l = calloc(1, sizeof(queue));
  l->action_priority = action_priority;
  l->value = value;
  l->action = action;
  l->next = NULL;
  return l;
}

void add_node_to_queue(queue *q, int action_priority, double value,
                       int action) {
  queue *node = calloc(1, sizeof(queue));
  node->action_priority = action_priority;
  node->value = value;
  node->action = action;
  while (q->next != NULL) {
    q = q->next;
  }
  node->next = q->next;
  q->next = node;
}

void remove_node_from_queue(queue **q) {
  void *tmp = (*q)->next;
  free(*q);
  *q = tmp;
}

void take_node_from_queue(queue **q, int *action_priority, double *value,
                          int *action) {
  *action_priority = (*q)->action_priority;
  *value = (*q)->value;
  *action = (*q)->action;
  void *tmp = (*q)->next;
  free(*q);
  *q = tmp;
}

void remove_queue(queue *q) {
  while (q != NULL) {
    void *next = q->next;
    free(q);
    q = next;
  }
}

int parse_long_func(char **to_parse, int *action_priority, double *value,
                    int *action, int minus) {
  int er = 0;
  if (!strncmp(*to_parse, "mod", 3)) {
    *action_priority = 3;
    *action = MOD;
    *value = minus;
    (*to_parse) += 3;
  } else if (!strncmp(*to_parse, "sqrt", 4)) {
    *action_priority = 4;
    *action = SQRT;
    *value = minus;
    (*to_parse) += 4;
  } else if (!strncmp(*to_parse, "sin", 3)) {
    *action_priority = 5;
    *action = SIN;
    *value = minus;
    (*to_parse) += 3;
  } else if (!strncmp(*to_parse, "tan", 3)) {
    *action_priority = 5;
    *action = TAN;
    *value = minus;
    (*to_parse) += 3;
  } else if (!strncmp(*to_parse, "acos", 4)) {
    *action_priority = 5;
    *action = ACOS;
    *value = minus;
    (*to_parse) += 4;
  } else if (!strncmp(*to_parse, "cos", 3)) {
    *action_priority = 5;
    *action = COS;
    *value = minus;
    (*to_parse) += 3;
  } else if (!strncmp(*to_parse, "asin", 4)) {
    *action_priority = 5;
    *action = ASIN;
    *value = minus;
    (*to_parse) += 4;
  } else if (!strncmp(*to_parse, "atan", 4)) {
    *action_priority = 5;
    *action = ATAN;
    *value = minus;
    (*to_parse) += 4;
  } else if (!strncmp(*to_parse, "ln", 2)) {
    *action_priority = 5;
    *action = LN;
    *value = minus;
    (*to_parse) += 2;
  } else if (!strncmp(*to_parse, "log", 3)) {
    *action_priority = 5;
    *action = LOG;
    *value = minus;
    (*to_parse) += 3;
  } else if (!strncmp(*to_parse, "tan", 3)) {
    *action_priority = 5;
    *action = TG; 
    *value = minus;
    (*to_parse) += 3;
  } else if (!strncmp(*to_parse, "ctan", 4)) {
    *action_priority = 5;
    *action = CTG;
    *value = minus;
    (*to_parse) += 4;
  }
    else {
    er = 1;
  }
  return er;
}

int create_info(int *action_priority, double *value, int *action,
                char **to_write, int minus, double x_val) {
  int er = 0;
  while (**to_write == ' ') {
    (*to_write)++;
  }
  if (**to_write >= '0' && **to_write <= '9') {
    sscanf(*to_write, "%lf", value);
    while (*to_write && **to_write >= '0' && **to_write <= '9' || **to_write == '.') {
      (*to_write)++;
    }
    *value *= minus;
  } else if (**to_write == '*' || **to_write == '/' || **to_write == '+' ||
             **to_write == '-' || **to_write == '^' || **to_write == ')' ||
             **to_write == '(') {
    if (**to_write == '(' || **to_write == ')') {
      *action_priority = 1;
    } else if (**to_write == '+' || **to_write == '-') {
      *action_priority = 2;
    } else if (**to_write == '*' || **to_write == '/') {
      *action_priority = 3;
    } else if (**to_write == '^') {
      *action_priority = 4;
    }
    *action = **to_write;
    (*to_write)++;
  } else if (**to_write == 'x') {
    *action_priority = 0;
    *value = x_val * minus;
    (*to_write)++;
  } else {
    er = parse_long_func(to_write, action_priority, value, action, minus);
  }
  return er;
}
