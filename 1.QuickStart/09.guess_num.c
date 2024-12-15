#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  // 1. random number generation
  srand(time(NULL));
  int magic_number = rand();
  // 2. loop
  while (1)
  {
    int user_input;
    puts("Guess the magic number: ");
    scanf("%d", &user_input);
    // 3. check if the guess is correct
    if (user_input > magic_number)
    {
      printf("Too high!\n");
    }
    else if (user_input < magic_number)
    {
      printf("Too low!\n");
    }
    else
    {
      printf("Congratulations! You guessed the magic number!\n");
      break;
    }
  }

  return 0;
}