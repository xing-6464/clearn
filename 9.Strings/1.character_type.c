#include <ctype.h>
#include "../include/io_utils.h"

int main()
{
  // isdigit() function checks if a character is a digit
  PRINT_INT(isdigit('0')); // 1
  PRINT_INT(isspace(' ')); // 8
  PRINT_INT(isalpha('a')); // 2
  PRINT_INT(isalnum('f')); // 2
  PRINT_INT(isalnum('1')); // 4
  PRINT_INT(ispunct(',')); // 16
  return 0;
}
