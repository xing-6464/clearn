#include <stdio.h>
#include <limits.h>

int main()
{
  // 有符号整数类型
  short short_int = 0;
  int i = 100;
  long long_int = 0;
  long long long_long_int = 0;

  // 无符号整数类型
  unsigned short unsigned_short_int = 0;
  unsigned int unsigned_int = 0;
  unsigned long unsigned_long_int = 0;
  unsigned long long unsigned_long_long_int = 0;

  // %x: hex
  // %o: octal
  printf("int in x: %x\n", i);
  printf("int in octal: %o\n", i);

  // %hd: short decimal
  // %d: decimal
  // %ld: long decimal
  // %lld: long long decimal

  // %hu: unsigned short decimal
  // %u: unsigned decimal
  // %lu: unsigned long decimal
  // %llu: unsigned long long decimal

  // \n: new line
  size_t size_of_int = sizeof(int);
  printf("short int size: %hd\n", sizeof(short));
  printf("int size: %d\n", sizeof(int));
  printf("long int size: %ld\n", sizeof(long));
  printf("long long int size: %lld\n", sizeof(long long));

  printf("max int %d, min %d\n", INT_MAX, INT_MIN);
  printf("unsigned max int %u, min %u\n", UINT_MAX, 0);

  return 0;
}