#include "../polish/data_structures.h"
#include <check.h>
int calculate_polish(char *str, double x_val, double *result);

START_TEST(calc_1) {
  char *str = " ( sin ( x ) * - 15.812974239846 ) + 2 * x";
  double x = 10;
  double answer = 0;
  int success = 0;
  calculate_polish(str, x, &answer);
  double true_answer = (sin(x) * (-15.812974239846)) + 2 * x;
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  ck_assert_int_eq(0, success);
}
END_TEST

START_TEST(calc_2) {
  char *str = " asin ( 0.2 ) / ( cos ( x ) * - 15.812974239846 )";
  double x = 10;
  double answer = 0;
  int success = 0;
  calculate_polish(str, x, &answer);
  double true_answer = asin(0.2) / (cos(x) * -15.812974239846);
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  ck_assert_int_eq(0, success);
}
END_TEST

START_TEST(calc_3) {
  char *str = " 5 mod 2";
  double x = 10;
  double answer = 0;
  int success = 0;
  calculate_polish(str, x, &answer);

  double true_answer = 5 % 2;
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  ck_assert_int_eq(0, success);
}
END_TEST

START_TEST(calc_4) {
  char *str = " tan ( x ) - ctan ( 0.2 ) / ( acos ( 0.1 ) - ln ( 6 ) )";
  double x = 10;
  double answer = 0;
  int success = 0;
  calculate_polish(str, x, &answer);
  double true_answer = tan(x) - (cos(0.2) / sin(0.2)) / (acos(0.1) - log(6));
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  ck_assert_int_eq(0, success);
}
END_TEST

START_TEST(calc_5) {
  char *str = " sqrt ( x ) ^ 12";
  double x = 10;
  double answer = 0;
  int success = 0;
  double true_answer = pow(sqrt(x), 12);
  calculate_polish(str, x, &answer);
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  ck_assert_int_eq(0, success);
}
END_TEST

START_TEST(calc_6) {
  char *str = " + sqrt ( x ) ^ 12";
  double x = 10;
  double answer = 0;
  double true_answer = +pow(sqrt(x), 12);
  int success = 0;
  calculate_polish(str, x, &answer);
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  ck_assert_int_eq(0, success);
}
END_TEST

START_TEST(calc_7) {
  char *str = " - sqrt ( x ) ^ 12 ";
  double x = 10;
  double true_answer = -(pow(sqrt(x), 12));
  double answer = 0;
  int success = 0;
  calculate_polish(str, x, &answer);
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  ck_assert_int_eq(0, success);
}
END_TEST

START_TEST(calc_8) {
  char *str = " log ( x ) + atan ( 1 )";
  double x = 10;
  double answer = 0;
  double true_answer = log10(x) + atan(1);
  int success = 0;
  calculate_polish(str, x, &answer);
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  ck_assert_int_eq(0, success);
}
END_TEST

Suite *suite_calc(void) {
  Suite *s;
  TCase *tc;

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
  suite_add_tcase(s, tc);

  return (s);
}

int main() {
  SRunner *sr = srunner_create(suite_calc());
  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);
  srunner_free(sr);
}