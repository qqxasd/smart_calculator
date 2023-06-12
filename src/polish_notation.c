#include "polish_notation.h"

queue *parse_input_str(char *str, double x_val, int *error);
queue *input_to_polish(queue *input);
double calculate(queue *polish_str);

int calculate_polish(char *str, double x_val, double *result) {
  int er = 0;
  queue *str = parse_input_str(str, x_val, &er);
  if (!er) {
    queue *polish_str = input_to_polish(str);
    *result = calculate(polish_str);
    remove_queue(polish_str);
  }
  return er;
}
