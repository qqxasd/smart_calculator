#include "polish_notation.h"

int parse_input_str(char *str, queue *queued_str);
queue *input_to_polish(queue *input);
double calculate(queue *polish_str, double x_val);

int calculate_polish(char *str, double x_val, double *result) {
  int er = 0;
  queue queued_str;
  er = parse_input_str(str, &queued_str);
  if (!er) {
    queue *polish_str = input_to_polish(&queued_str);
    *result = calculate(polish_str, x_val);
    remove_queue(polish_str);
  }
  return er;
}

int parse_input_str(char *str, queue *queued_str) {
  if (!str || *str == '\0') {
    return FAILURE;
  }
  int just_read = 0;
  info tok;
  queue queued_str; 
  int er = SUCCESS; 
  if (!(er = create_info(&tok, str, &just_read))) {
    queued_str = queue_init(&tok);
    str += just_read;
    just_read = 0;
    while (!create_info(&tok, str, &just_read)) {
      add_node_to_queue(&queued_str, &tok);
      str += just_read;
      just_read = 0;
    }
  }
  return er;  
}