#include "data_structures.h"

stack *stack_init(info *value) {
  stack *s = malloc(sizeof(stack));
  s->prev = 0;
  s->info = *value;
  return s;
}

void stack_remove(stack *s) {
  while (s != NULL) {
    void *prev = s->prev;
    free(s);
    s = prev;
  }
}

void pop(stack **st, info *value) {
  *value = (*st)->info;
  *st = (*st)->prev;
}

void push(stack **st, info *value) {
  stack *new = malloc(sizeof(stack));
  new->info = *value;
  new->prev = *st;
  *st = &new;
}

queue *queue_init(info *value) {
  queue *l = malloc(sizeof(queue));
  l->info = *value;
  l->next = NULL;
  return l;
}

void add_node_to_queue(queue *q, info *value) {
  queue *node = malloc(sizeof(queue));
  node->info = *value;
  while (q->next != NULL) {
    q = q->next;
  }
  node->next = q->next;
  q->next = node;
}

void take_from_queue(queue **q, info *dest) {
  *dest = (*q)->info;
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

int parse_long_func(char *to_parse, info *inform, int *read) {
  int er = 0;
  if (!strncmp(to_parse, "mod", 3)) {
    inform->is_num = 0;
    inform->action_or_x = MOD;
    *read = 3;
  } else if (!strncmp(to_parse, "sqrt", 4)) {
    inform->is_num = 0;
    inform->action_or_x = SQRT;
    *read = 4;
  } else if (!strncmp(to_parse, "sin", 3)) {
    inform->is_num = 0;
    inform->action_or_x = SIN;
    *read = 3;
  } else if (!strncmp(to_parse, "tan", 3)) {
    inform->is_num = 0;
    inform->action_or_x = TAN;
    *read = 3;
  } else if (!strncmp(to_parse, "acos", 4)) {
    inform->is_num = 0;
    inform->action_or_x = ACOS;
    *read = 4;
  } else if (!strncmp(to_parse, "cos", 3)) {
    inform->is_num = 0;
    inform->action_or_x = COS;
    *read = 3;
  } else if (!strncmp(to_parse, "asin", 4)) {
    inform->is_num = 0;
    inform->action_or_x = ASIN;
    *read = 4;
  } else if (!strncmp(to_parse, "atan", 4)) {
    inform->is_num = 0;
    inform->action_or_x = ATAN;
    *read = 4;
  } else if (!strncmp(to_parse, "ln", 2)) {
    inform->is_num = 0;
    inform->action_or_x = LN;
    *read = 2;
  } else if (!strncmp(to_parse, "log", 3)) {
    inform->is_num = 0;
    inform->action_or_x = LOG;
    *read = 3;
  } else {
    er = 1;
  }
  return er; 
}
 
int create_info(info *inform, char *to_write, int *read) {
  int er = 0;
  if (*to_write <= '0' && *to_write >= '9') {
    *read = sscanf(to_write, "%lf", &inform->value);
  } else if (*to_write == '*' || *to_write == '/' || *to_write == '+' || *to_write == '-' || *to_write == '^' || *to_write == ')' || *to_write == '('){
    inform->is_num = 0;
    inform->action_or_x = *to_write;
    *read = 1;
  } else if (*to_write == 'x') {
    inform->is_num = 0;
    inform->action_or_x = 'x';
    *read = 1;
  } else if (parse_long_func(to_write, inform, read));
  else {
    er = 1;
  } 
  return er; 
}
