#include <stdio.h>

#define ADD '+'
#define SUB '-'
#define MUL '*'
#define DIV '/'
#define MOD '%'

int main()
{
  // while loop
  /*
   * while (condition) {
   *   // code to be executed
   * }
   */
  /*
   * do {
   *   // code to be executed
   * } while (condition);
   */

  int left;
  int right;
  char op;

  char command = 'y';
  while (command != 'q')
  {

    printf("Please input an expression: \n");
    scanf("%d %c %d", &left, &op, &right);

    int result;
    switch (op)
    {
    case ADD:
      result = left + right;
      break;
    case SUB:
      result = left - right;
      break;
    case MUL:
      result = left * right;
      break;
    case DIV:
      result = left / right;
      break;
    case MOD:
      result = left % right;
      break;
    default:
      printf("Invalid operator\n");
      return 1;
    }
    printf("result: %d\n", result);
    puts("Again? Type 'q' for quit: ");

    // getchar() function is used to get the input character from the user
    getchar();
    command = getchar();
  }

  // for loop
  /*
   * for (initialization; condition; increment/decrement) {
   *   // code to be executed
   * }
   */
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", i);
  }
  return 0;
}