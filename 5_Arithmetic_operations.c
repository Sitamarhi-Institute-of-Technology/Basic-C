#include<stdio.h>
int main()
{
    // THE ARITHMETIC OPERATION WE DO IN MATHEMATICS, WE NEED TO PERFORM SIMILAR OPERATION IN OUR PROGRAMS TO SOLVE QUESTIONS.
    // TO PERFORM MATHEMATICAL OPERATION WE USE ARITHMATIC OPERATIONS
    
    double num1,num2,num3;

    printf("\nENTER NUM1 = ");
    scanf("%lf",&num1);

    printf("\nENTER NUM2 = ");
    scanf("%lf",&num2);

    // SUMMATION (+)
    num3 = num1 + num2;

    printf("\n%10lf + %10lf = %10lf",num1,num2,num3);

    // SUBTRACT (-)
    num3 = num1 - num2;

    printf("\n%10lf - %10lf = %10lf",num1,num2,num3);

    // MULTIPLY (*)
    num3 = num1 * num2;

    printf("\n%10lf * %10lf = %10lf",num1,num2,num3);

    // DIVIDE (/)
    num3 = num1 / num2;

    printf("\n%10lf / %10lf = %10lf",num1,num2,num3);







    printf("\n\n||****************************************|| THE END OF EPISODE 5 ||****************************************||");






    return 0;
}