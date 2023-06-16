#include <check.h>

START_TEST(calc_1) {
  char* str = " ( sin ( x ) * - 15.812974239846 ) + 2 * x";
  char** tokens = calloc(256, sizeof(char*));
  for (int i = 0; i < 256; i++) {
    tokens[i] = calloc(256, sizeof(char));
  }
  parse(str, tokens);
  struct queue* result = init_q();
  polish_notation(tokens, &result);
  char** list = {0};
  queue_to_list(&result, &list);
  double x = 10;
  int success = 0;
  double answer = calc(list, x, &success);
  double true_answer = (sin(x) * (-15.812974239846)) + 2 * x;
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  for (int i = 0; i < 256; i++) {
    free(list[i]);
  }
  free(list);
}
END_TEST

START_TEST(calc_2) {
  char* str = " asin ( 0.2 ) / ( cos ( x ) * - 15.812974239846 )";
  char** tokens = calloc(256, sizeof(char*));
  for (int i = 0; i < 256; i++) {
    tokens[i] = calloc(256, sizeof(char));
  }
  parse(str, tokens);
  struct queue* result = init_q();
  polish_notation(tokens, &result);
  char** list = {0};
  queue_to_list(&result, &list);
  double x = 10;
  int success = 0;
  double answer = calc(list, x, &success);
  double true_answer = asin(0.2) / (cos(x) * -15.812974239846);
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  for (int i = 0; i < 256; i++) {
    free(list[i]);
  }
  free(list);
}
END_TEST

START_TEST(calc_3) {
  char* str = " 5 mod 2";
  char** tokens = calloc(256, sizeof(char*));
  for (int i = 0; i < 256; i++) {
    tokens[i] = calloc(256, sizeof(char));
  }
  parse(str, tokens);
  struct queue* result = init_q();
  polish_notation(tokens, &result);
  char** list = {0};
  queue_to_list(&result, &list);
  double x = 10;
  int success = 0;
  double answer = calc(list, x, &success);
  double true_answer = 5 % 2;
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  for (int i = 0; i < 256; i++) {
    free(list[i]);
  }
  free(list);
}
END_TEST

START_TEST(calc_4) {
  char* str = " tan ( x ) - ctg ( 0.2 ) / ( acos ( 0.1 ) - ln ( 6 ) )";
  char** tokens = calloc(256, sizeof(char*));
  for (int i = 0; i < 256; i++) {
    tokens[i] = calloc(256, sizeof(char));
  }
  parse(str, tokens);
  struct queue* result = init_q();
  polish_notation(tokens, &result);
  char** list = {0};
  queue_to_list(&result, &list);
  double x = 3.3;
  int success = 0;
  double answer = calc(list, x, &success);
  double true_answer = tan(x) - (cos(0.2) / sin(0.2)) / (acos(0.1) - log(6));
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  for (int i = 0; i < 256; i++) {
    free(list[i]);
  }
  free(list);
}
END_TEST

START_TEST(calc_5) {
  char* str = " sqrt ( x ) ^ 12";
  char** tokens = calloc(256, sizeof(char*));
  for (int i = 0; i < 256; i++) {
    tokens[i] = calloc(256, sizeof(char));
  }
  parse(str, tokens);
  struct queue* result = init_q();
  polish_notation(tokens, &result);
  char** list = {0};
  queue_to_list(&result, &list);
  double x = 10;
  int success = 0;
  double answer = calc(list, x, &success);
  double true_answer = pow(sqrt(x), 12);
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  for (int i = 0; i < 256; i++) {
    free(list[i]);
  }
  free(list);
}
END_TEST

START_TEST(calc_6) {
  char* str = " + sqrt ( x ) ^ 12";
  char** tokens = calloc(256, sizeof(char*));
  for (int i = 0; i < 256; i++) {
    tokens[i] = calloc(256, sizeof(char));
  }
  parse(str, tokens);
  struct queue* result = init_q();
  polish_notation(tokens, &result);
  char** list = {0};
  queue_to_list(&result, &list);
  double x = 10;
  int success = 0;
  double answer = calc(list, x, &success);
  double true_answer = +pow(sqrt(x), 12);
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  for (int i = 0; i < 256; i++) {
    free(list[i]);
  }
  free(list);
}
END_TEST

START_TEST(calc_7) {
  char* str = " - ( sqrt ( x ) ^ 12 )";
  char** tokens = calloc(256, sizeof(char*));
  for (int i = 0; i < 256; i++) {
    tokens[i] = calloc(256, sizeof(char));
  }
  parse(str, tokens);
  struct queue* result = init_q();
  polish_notation(tokens, &result);
  char** list = {0};
  queue_to_list(&result, &list);
  double x = 10;
  int success = 0;
  double answer = calc(list, x, &success);
  double true_answer = -(pow(sqrt(x), 12));
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  for (int i = 0; i < 256; i++) {
    free(list[i]);
  }
  free(list);
}
END_TEST

START_TEST(calc_8) {
  char* str = " log ( x ) + atan ( 1 )";
  char** tokens = calloc(256, sizeof(char*));
  for (int i = 0; i < 256; i++) {
    tokens[i] = calloc(256, sizeof(char));
  }
  parse(str, tokens);
  struct queue* result = init_q();
  polish_notation(tokens, &result);
  char** list = {0};
  queue_to_list(&result, &list);
  double x = 10;
  int success = 0;
  double answer = calc(list, x, &success);
  double true_answer = log10(x) + atan(1);
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  for (int i = 0; i < 256; i++) {
    free(list[i]);
  }
  free(list);
}
END_TEST

START_TEST(calc_9) {
  char* str = " sqrt ( x ) ^ 12 *";
  char** tokens = calloc(256, sizeof(char*));
  for (int i = 0; i < 256; i++) {
    tokens[i] = calloc(256, sizeof(char));
  }
  parse(str, tokens);
  struct queue* result = init_q();
  polish_notation(tokens, &result);
  char** list = {0};
  queue_to_list(&result, &list);
  double x = 10;
  int success = 0;
  calc(list, x, &success);
  ck_assert_int_eq(success, 1);
  for (int i = 0; i < 256; i++) {
    free(list[i]);
  }
  free(list);
}

Suite* suite_calc(void) {
  Suite* s;
  TCase* tc;

  s = suite_create("calc");
  tc = tcase_create("calc");
  tcase_add_test(tc, calc_1);
  tcase_add_test(tc, calc_2);
  tcase_add_test(tc, calc_3);
  tcase_add_test(tc, calc_4);
  tcase_add_test(tc, calc_5);
  tcase_add_test(tc, calc_6);
  tcase_add_test(tc, calc_7);
  tcase_add_test(tc, calc_8);
  tcase_add_test(tc, calc_9);
  suite_add_tcase(s, tc);

  return (s);
}

int main() {
  SRunner *sr = srunner_create(suite_calc());
  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);
  srunner_free(sr);
}