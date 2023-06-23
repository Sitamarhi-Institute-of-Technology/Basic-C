#include <stdio.h>

int main() {
  int num;

  printf("Enter a number between 1 and 5: ");
  scanf("%d", &num);

  switch(num) {
    case 1:
      printf("You entered the number 1.\n");
      break;
    case 2:
      printf("You entered the number 2.\n");
      break;
    case 3:
      printf("You entered the number 3.\n");
      break;
    case 4:
      printf("You entered the number 4.\n");
      break;
    case 5:
      printf("You entered the number 5.\n");
      break;
    default:
      printf("Invalid number entered.\n");
  }
  /*
  Here, we declare a variable num to store the user's input, and prompt the user to enter a number between 1 and 5. We then use a switch case statement to check the value of num and perform different actions depending on its value.

  For example, if the user enters 1, the program will execute the first case statement and print "You entered the number 1." We use the break keyword after each case to ensure the program doesn't continue executing the next case.

  If the user enters a number other than 1-5, the default case will execute and print "Invalid number entered."

  Switch case statements are useful for when you want to perform different actions based on a single variable's value. It can be more concise and readable than using multiple if-else statements.
  */

  return 0;
}
