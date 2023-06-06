#include<stdio.h>
int main()
{
   //# VARIABLES ARE LIKE BOXES WHERE YOU CAN PUT YOUR THINGS
   int a = 12 ; //   HERE "int a" IS YOUR BOX OR VARIABLE AND 12 IS YOUR THINGS THAT YOU ARE PUTTING IN VARIABLE 

   //# WHY DO WE NEED VARIABLES ?
   // IT CAN BE HELPFUL IN MANY WAYS BUT FOR NOW FOR OUR UNDERSTANDING I WILL SHOW ONE EXAMPLE
   
   printf("%d box, %d house, %d Women\n",a,a,a);

   // NOW IF WE WANT TO CHANGE THE NUMBER WE CAN JUST SIMPLY DO IT WITHOUT CHANGING EVERY LETTER ONE BY ONE
   a = 92;
   printf("%d box, %d house, %d Women\n",a,a,a);

   //# HONW MANY TYPES OF VARIABLES ARE THERE ?
   // MAINLY THERE ARE 3 TYPES OF VARIABLE AND IN C WE STRICTLY USE A VARIABLE FOR A CERTAIN DATA TYPE
   int number=9999;
   float decimal_number = 2424.345;
   char character = 'a';

   // NOW TO PRINT ANY VARIABLE WE USE A FORMAT SPECIFIER AS YOU KNOW
   printf("This is how we print a number = %d\n",number);
   printf("This is how we print a Decimal number = %f, or we can use to print it like these = %.2f , %.3f , %.4f\n",decimal_number,decimal_number,decimal_number,decimal_number);
   printf("This is how we print a character = %c\n",character);
   




   return 0;
}