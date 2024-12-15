#include <stdio.h>

int main()
{

  // 字符集 ASCII 码 127 个字符
  char char_1 = 'A'; // 65
  char char_2 = 'a'; // 97

  char i = 0; // \0, NULL

  // 字面量
  // \n: newline
  // \b: backspace
  // \t: table
  // \': ' 字符字面量
  // \": " 字符串字面量
  char char_1_space_oct = '\61';
  char char_1_space_hex = '\x31';

  // %c: character
  printf("char_1 = %c\n", char_1); // A
  printf("char_1 = %d\n", char_1); // 65

  // 多字节字符集 Unicode 码
  // C95增加宽字符
  wchar_t zhong = L'中';         // 20013
  wchar_t zhong_hex = L'\u4e2d'; // 20013

  printf("中 = %d\n", zhong);      // 20013
  printf(" 中 = %d\n", zhong_hex); // 20013
  wprintf("%lc\n", zhong);         // 中

  // 字符串
  char *str = "中";

  return 0;
}