#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Bool
  // true: 1, false: 0
  // _Bool or bool defined in stdbool.h
  _Bool is_enabled = true;
  is_enabled = 10;
  printf("is_enabled: %d\n", is_enabled); // 1
  is_enabled = false;

  bool is_visible = false;
  // if else
  /**
   * if (condition) {
   *   // code to be executed if condition is true
   * } else {
   *   // code to be executed if condition is false
   * }
   */

#define MAGIC_NUMBER 100
  int user_input;
  printf("Please input a number: \n");
  scanf("%d", &user_input);
  if (user_input > MAGIC_NUMBER)
  {
    printf("The number is greater than %d\n", MAGIC_NUMBER);
  }
  else if (user_input < MAGIC_NUMBER)
  {
    printf("The number is less than %d\n", MAGIC_NUMBER);
  }
  else
  {
    printf("The number is equal to %d\n", MAGIC_NUMBER);
  }

  // ?: -> <expr> ? <true_expr> : <false_expr>
  int res = (user_input > MAGIC_NUMBER) ? 1 : 0;
  printf("result: %d\n", res);

  // switch
  /**
   * switch (expression) {
   *   case value1: {
   *       // code to be executed if expression is equal to value1
   *     }
   *     break;
   *   case value2: {
   *       // code to be executed if expression is equal to value2
   *     }
   *     break;
   *   // ...
   *   default:
   *     // code to be executed if expression doesn't match any case
   * }
   */

#define ADD '+'
#define SUB '-'
#define MUL '*'
#define DIV '/'
#define MOD '%'
  int left;
  int right;
  char op;
  int result;

  printf("Please input an expression: \n");
  scanf("%d %c %d", &left, &op, &right);

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

  return 0;
}