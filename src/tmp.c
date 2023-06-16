#include "polish/data_structures.h"
#include "polish/polish_notation.h"

int main() {
  char *str = " tan ( x ) - ctg ( 0.2 ) / ( acos ( 0.1 ) - ln ( 6 ) )";
  double x = 10;
  double answer = 0;
  int success = 0;
  calculate_polish(str, x, &answer);
  double true_answer = tan(x) - (cos(0.2) / sin(0.2)) / (acos(0.1) - log(6));
}