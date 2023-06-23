#include "polish/data_structures.h"
#include "polish/polish_notation.h"

#define MOD 10
#define SQRT 11
#define SIN 12 
#define TAN 13
#define ACOS 14
#define COS 15
#define ASIN 16
#define ATAN 17
#define LN 18
#define LOG 19
#define TG 20
#define CTG 21

int main() {
  char *str = " - x ";
  double x = 10;
  double answer = 0;
  int success = 0;
  calculate_polish(str, x, &answer);
  double true_answer = -pow(sqrt(x), 12);
  printf("%lf, %lf", answer, true_answer);
}