#include <stdio.h>

// a, b 形式参数
double Add(double a, double b)
{
  return a + b;
}

int main()
{
  /*
   * Function definition
   * <return_type> <function_name>(<parameter_list>)
   * {
   *   <function_body>
   * }
   */

  // 2.5, 3.5 形式参数
  double result = Add(2.5, 3.5);
  printf("The sum of 2.5 and 3.5 is: %f\n", result);

  return 0;
}