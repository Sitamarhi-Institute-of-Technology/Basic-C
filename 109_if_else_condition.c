#include<stdio.h>
int main()
{
    int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num < 0) 
  {

    printf("%d is a negative number\n", num);

  } 
  else if (num == 0) 
  {

    printf("%d is zero\n", num);

  } 
  else 
  {

    printf("%d is a positive number\n", num);

  }

    // This code prompts the user to enter a number and checks if it's negative, zero, or positive using if else statements.

    // Note the use of the logical operators < and == inside the conditions. The first condition is true if the input number is less than zero, the second condition is true if it's equal to zero, and the third condition is true if it's greater than zero.

    // Also, note how we use printf to print different messages depending on the input number. If it's negative, we print "is a negative number". If it's zero, we print "is zero". If it's positive, we print "is a positive number".

    // This is just a simple example, but if else statements are very useful in programming, as they allow you to execute different blocks of code based on different conditions.






    return 0;
}