#include <stdio.h>

int main()
{
  int first = 0;
  int second;
  int third;

  // 表达式
  third = second = first;

  int left, right;
  left = 10;
  right = 5;

  // 赋值运算符: + , -, *, /, %
  int sum;
  sum = left + right; // 15
  int difference;
  difference = left - right; // 5
  int product;
  product = left * right; // 50
  int quotient;
  quotient = left / right; // 2
  int remainder;
  remainder = left % right; // 0

  printf("sum: %d\n", sum);
  printf("difference: %d\n", difference);
  printf("product: %d\n", product);
  printf("quotient: %d\n", quotient);
  printf("remainder: %d\n", remainder);

  // 关系运算符: >, <, >=, <=, ==,!=
  // true: 1, false: 0
  printf("left > right: %d\n", left > right);   // 1
  printf("left < right: %d\n", left < right);   // 0
  printf("left >= right: %d\n", left >= right); // 1
  printf("left <= right: %d\n", left <= right); // 0
  printf("left == right: %d\n", left == right); // 0
  printf("left != right: %d\n", left != right); // 1

  // 逻辑运算符: && (AND), || (OR), ! (NOT)
  printf("3 > 2 && 4 > 3: %d\n", 3 > 2 && 4 > 3); // 1
  printf("3 > 2 || 4 > 3: %d\n", 3 > 2 || 4 > 3); // 1
  printf("!(3 > 2): %d\n", !(3 > 2));             // 0

  // 自增/自减运算符: ++ (increment), -- (decrement)
  int i = 0;
  int j = i++;          // 0
  int k = ++i;          // 2
  printf("j: %d\n", j); // 0
  printf("k: %d\n", k); // 2
  return 0;
}
