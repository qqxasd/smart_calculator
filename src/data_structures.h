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
  int action_priority;
  double value;
  char action;
  void *next;
} queue;

typedef struct {
  int action_priority;
  double value;
  char action;
  void *prev;
} stack;

void remove_element_from_stack(stack **s);
stack *stack_init(int action_priority, double value, int action);
void pop(stack **st, int action_priority, double value, int action);
void push(stack **st, int action_priority, double value, int action);
queue *queue_init(int action_priority, double value, int action);
void add_node_to_queue(queue *q, int action_priority, double value, int action);
void take_node_from_queue(queue **q, int *action_priority, double *value, int *action);
void remove_queue(queue *q);
int create_info(int *action_priority, double *value, int *action, char *to_write, int *read);

#endif