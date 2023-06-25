#include "../calc/polish/data_structures.h"
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

START_TEST(calc_9) {
  char *str = "-cos(x)";
  double x = 10;
  double answer = 0;
  double true_answer = -cos(x);
  int success = 0;
  calculate_polish(str, x, &answer);
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  ck_assert_int_eq(0, success);
}
END_TEST

START_TEST(calc_10) {
  char *str = "-tan(x)";
  double x = 10;
  double answer = 0;
  double true_answer = -tan(x);
  int success = 0;
  calculate_polish(str, x, &answer);
  ck_assert_double_eq_tol(answer, true_answer, 1e-7);
  ck_assert_int_eq(0, success);
}
END_TEST

START_TEST(calc_11) {
  char *str = "-tan";
  double x = 10;
  double answer = 0;
  int success = 1;
  calculate_polish(str, x, &answer);
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(calc_12) {
  char *str = "-+";
  double x = 10;
  double answer = 0;
  int success = 1;
  calculate_polish(str, x, &answer);
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(calc_13) {
  char *str = "*2";
  double x = 10;
  double answer = 0;
  int success = 1;
  calculate_polish(str, x, &answer);
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(calc_14) {
  char *str = "((x * 10) ";
  double x = 10;
  double answer = 0;
  int success = 1;
  calculate_polish(str, x, &answer);
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(calc_15) {
  char *str = "2 + 2.2 * x *";
  double x = 10;
  double answer = 0;
  int success = 1;
  calculate_polish(str, x, &answer);
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(calc_16) {
  char *str = "-tan * /";
  double x = 10;
  double answer = 0;
  int success = 1;
  calculate_polish(str, x, &answer);
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(calc_17) {
  char *str = "x + 10)";
  double x = 10;
  double answer = 0;
  int success = 1;
  calculate_polish(str, x, &answer);
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(calc_18) {
  char *str = "* 10";
  double x = 10;
  double answer = 0;
  int success = 1;
  calculate_polish(str, x, &answer);
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(calc_19) {
  char *str = "";
  double x = 10;
  double answer = 0;
  int success = 1;
  calculate_polish(str, x, &answer);
  ck_assert_int_eq(1, success);
}
END_TEST

START_TEST(calc_20) {
  char *str = "2 + x * 10 aboba";
  double x = 10;
  double answer = 0;
  int success = 1;
  calculate_polish(str, x, &answer);
  ck_assert_int_eq(1, success);
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
  tcase_add_test(tc, calc_9);
  tcase_add_test(tc, calc_10);
  tcase_add_test(tc, calc_11);
  tcase_add_test(tc, calc_12);
  tcase_add_test(tc, calc_13);
  tcase_add_test(tc, calc_14);
  tcase_add_test(tc, calc_15);
  tcase_add_test(tc, calc_16);
  tcase_add_test(tc, calc_17);
  tcase_add_test(tc, calc_18);
  tcase_add_test(tc, calc_19);
  tcase_add_test(tc, calc_20);
  suite_add_tcase(s, tc);

  return (s);
}

int main() {
  SRunner *sr = srunner_create(suite_calc());
  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);
  srunner_free(sr);
}