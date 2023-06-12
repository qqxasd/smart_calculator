#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

#include <string.h>

typedef struct {
  int is_num;
  double num;
  char l;
} info;

typedef struct {
  info info;
  void *next;
} queue;

typedef struct {
  info info;
  void *prev;
} stack;

stack *stack_init(info *value);
void pop(stack **st, info *value);
void push(stack **st, info *value);
queue *queue_init(info *value);
void add_node_to_queue(queue *q, info *value);
void take_from_queue(queue **q, info *dest);
void remove_queue(queue *q);

#endif