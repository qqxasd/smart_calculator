#include "data_structures.h"

  int action_priority;
  double value;
  char action;

stack *stack_init(int action_priority, double value, int action) {
  stack *s = malloc(sizeof(stack));
  s->prev = NULL;
  s->action_priority = action_priority;
  s->value = value;
  s->value = action;
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
  void *tmp = *s; 
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

void add_node_to_queue(queue *q, int action_priority, double value, int action) {
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
  void *tmp = *q;
  free(*q);
  *q = tmp;
}

void take_node_from_queue(queue **q, int *action_priority, double *value, int *action) {
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

int parse_long_func(char *to_parse, int *action_priority, double *value, int *action, int *read) {
  int er = 0;
  if (!strncmp(to_parse, "mod", 3)) {
    *action_priority = 5;
    *action = MOD;
    *read = 3;
  } else if (!strncmp(to_parse, "sqrt", 4)) {
    *action_priority = 5;
    *action = SQRT;
    *read = 4;
  } else if (!strncmp(to_parse, "sin", 3)) {
    *action_priority = 5;
    *action = SIN;
    *read = 3;
  } else if (!strncmp(to_parse, "tan", 3)) {
    *action_priority = 5;
    *action = TAN;
    *read = 3;
  } else if (!strncmp(to_parse, "acos", 4)) {
    *action_priority = 5;
    *action = ACOS;
    *read = 4;
  } else if (!strncmp(to_parse, "cos", 3)) {
    *action_priority = 5;
    *action = COS;
    *read = 3;
  } else if (!strncmp(to_parse, "asin", 4)) {
    *action_priority = 5;
    *action = ASIN;
    *read = 4;
  } else if (!strncmp(to_parse, "atan", 4)) {
    *action_priority = 5;
    *action = ATAN;
    *read = 4;
  } else if (!strncmp(to_parse, "ln", 2)) {
    *action_priority = 5;
    *action = LN;
    *read = 2;
  } else if (!strncmp(to_parse, "log", 3)) {
    *action_priority = 5;
    *action = LOG;
    *read = 3;
  } else {
    er = 1;
  }
  return er; 
}
 
int create_info(int *action_priority, double *value, int *action, char *to_write, int *read) {
  int er = 0;
  if (*to_write <= '0' && *to_write >= '9') {
    *read = sscanf(to_write, "%lf", &*value);
  } else if (*to_write == '*' || *to_write == '/' || *to_write == '+' || *to_write == '-' || *to_write == '^' || *to_write == ')' || *to_write == '('){
    if (*to_write == '(' || *to_write == ')') {
      *action_priority = 1;
    }
    if (*to_write == '+' || *to_write == '-') {
      *action_priority = 2;
    }
    if (*to_write == '*' || *to_write == '/') {
      *action_priority = 3;
    }
    if (*to_write == '^') {
      *action_priority = 4;
    }
    *action = *to_write;
    *read = 1;
  } else if (*to_write == 'x') {
    *action_priority = -1;
    *read = 1;
  } else if (parse_long_func(to_write, action_priority, value, action, read));
  else {
    er = 1;
  } 
  return er; 
}
