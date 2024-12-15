#include <stdlib.h>
#include <errno.h>
#include "../include/io_utils.h"

// atoX： 使用简单，适用于简单、要求不高的场景。
// strtoX： 功能更加丰富，适用于复杂、要求高的场景。

int main()
{
  // atoi() function converts a string to an integer.
  PRINT_INT(atoi("12345"));     // 12345
  PRINT_INT(atoi("-12345"));    // -12345
  PRINT_INT(atoi("    12345")); // 12345
  PRINT_INT(atoi("0x10"));      // 0

  // atof() function converts a string to a double.
  PRINT_DOUBLE(atof("3.14159"));        // 3.14159
  PRINT_DOUBLE(atof("-12e34"));         // -1.2e+35
  PRINT_DOUBLE(atof("    3.14159abc")); // 3.14159
  PRINT_DOUBLE(atof("0x10"));           // 16
  PRINT_DOUBLE(atof("0x10p3.4"));       // 128

  // strtol function converts a string to a long integer.
  // strtoll function converts a string to a long long integer.
  // strtoul function converts a string to an unsigned long integer.
  // strtoull function converts a string to an unsigned long long integer.
  // strtof function converts a string to a float.
  // strtod function converts a string to a double.
  // strtold function converts a string to a long double.
  // strtoimax function converts a string to a signed integer of maximum size.
  // strtoumax function converts a string to an unsigned integer of maximum size.
  char const *const kInput = "1 2000000000000000000000000 3 -4 5abcd bye.";
  PRINTLNF("parse: %s", kInput);
  char const *start = kInput;
  char *end;
  while (1)
  {
    errno = 0;

    const long i = strtol(start, &end, 10);
    if (start == end)
    {
      break;
    }

    printf("'%.*s'\t ==> %ld\n", (int)(end - start), start, i);
    if (errno == ERANGE)
    {
      perror("");
    }

    putchar('\n');
    start = end;
  }

  PRINTLNF("Left: %s", end);

  return 0;
}
