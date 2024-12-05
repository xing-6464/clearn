#include <stdio.h>

int main()
{
  // 变量名： 1. 字母、数字、下划线组成； 2. 不能以数字开头； 3. 大小写敏感； 4. 尽量见名知意。
  // 变量
  // <type> <name>
  int value;

  // <type> <name> = <value>;
  int value_int = 10;

  // 变量赋值
  value = 20;
  value_int = 30;

  // 输出变量的值
  printf("value = %d\n", value);

  value_int = value;

  // sizeof() 函数返回变量的字节数
  printf("size of value = %d\n", sizeof(value)); // 4

  // 取地址
  printf("address of value: %#x\n", &value);

  return 0;
}