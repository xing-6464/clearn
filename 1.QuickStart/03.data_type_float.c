#include <stdio.h>

int main()
{
  // float 和 double 类型是使用科学计数法表示的浮点数, 1.2345e-3 表示 0.0012345
  // 科学计数法：1位表示符号，23位表示整数部分，8位表示指数部分
  float a_float = 3.14f;  // 6, 7~8 +-10^-37 ~ 10^37
  double a_double = 3.14; // 15 +-10^-308 ~ 10^308
  // 查看浮点数的字节数
  printf("a_float = %d\n", sizeof(float));   // 4
  printf("a_double = %d\n", sizeof(double)); // 8

  return 0;
}