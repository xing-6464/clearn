#include <stdio.h>

// 真正的常量定义
#define COLOR_RED 0xFF0000
#define COLOR_GREEN 0x00FF00
#define COLOR_BLUE 0x0000FF

int main()
{
  // const常量: 相当于ready-only的变量
  const int kRed = 0xFF0000;
  const int kGreen = 0x00FF00;
  const int kBlue = 0x0000FF;
  printf("kRed = %X\n", kRed);

  // 可以使用指针尝试修改常量的值
  int *p_k_red = &kRed;
  *p_k_red = 0; // 不能修改常量的值
  printf("kRed = %d\n", kRed);

  // macro定义的常量不能修改
  printf("COLOR_RED = %d\n", COLOR_RED); // 不能修改常量的值

#undef COLOR_RED // 取消macro定义的常量

  // 字面量 literal constant

  return 0;
}