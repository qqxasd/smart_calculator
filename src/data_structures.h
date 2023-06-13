#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H
#define SUCCESS 0
#define FAILURE 1
#define MOD 10
#define SQRT 11
#define SIN 12 
#define TAN 13
#define ACOS 14
#define COS 15
#define ASIN 16
#define ATAN 17
#define LN 2
#define LOG 3

#include <string.h>

typedef struct {
  int is_num;
  double value;
  char action_or_x;
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
int create_info(info *inform, char *to_write, int *read);

#endif