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