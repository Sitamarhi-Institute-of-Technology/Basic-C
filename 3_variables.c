#include<stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
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
   
   // THERE ARE SOME RULES THAT ONE SHOULD FOLLOW FOR CREATING A VARIABLE
   // DONOT USE KEYWORDS AND USE ALPHANUMERIC WORDS
   int number=9999;
   float decimal_number = 2424.345;
   char character = 'a';

   // NOW TO PRINT ANY VARIABLE WE USE A FORMAT SPECIFIER AS YOU KNOW
   printf("This is how we print a number = %d\n",number);
   printf("This is how we print a Decimal number = %f, or we can use to print it like these = %.2f , %.3f , %.4f\n",decimal_number,decimal_number,decimal_number,decimal_number);
   printf("This is how we print a character = %c\n",character);


   //# JUST LIKE A CONTAINER OVERFLOW WHEN FILLED TOO MUCH JUST LIKE THAT WE CANNOT STORE MORE THAN IT IS BULIT TO HOLD DATA
   int intType;
   float floatType;
   double doubleType;
   char charType;

   // The sizeof(variable)operator computes the size of a variable. And, to print the result returned by sizeof, we use either %lu or %zu format specifier.
   // "sizeof is pre-defined function to calculate size of variable we will learn more about functions later"
   printf( "============================================================\n");
   printf( "Size of Data Types in C\n" );
   printf( "------------------------------------------------------------\n");
   printf("Size of int: %zu bytes\n", sizeof(intType));
   printf("Size of float: %zu bytes\n", sizeof(floatType));
   printf("Size of double: %zu bytes\n", sizeof(doubleType));
   printf("Size of char: %zu byte\n", sizeof(charType));

   // BELOW THE MAX AND MIN RANGE OF DATA VALUES THAT YOU CAN STORE IN A VARIABLE, ALWAYS MAKE SURE YOU DON'T EXCEED THE DEFINED VALUE
   // TO STORE VARY LARGE DATA AND SMALL DATA THERE ARE SOME OPTION ONE SHOULD USE SHORT OR LONG BEFORE DEFINIG AN INTEGER
   printf( "============================================================\n");
   printf( "Ranges for integer data types in C\n" );
   printf( "------------------------------------------------------------\n");
   printf( "int8_t    %20d  %20d\n"     , SCHAR_MIN , SCHAR_MAX  );
   printf( "int16_t   %20d  %20d\n"     , SHRT_MIN  , SHRT_MAX   );
   printf( "int32_t   %20d  %20d\n"     , INT_MIN   , INT_MAX    );
   printf( "int64_t   %20lld  %20lld\n" , LLONG_MIN , LLONG_MAX  );
   printf( "uint8_t   %20d  %20d\n"     , 0         , UCHAR_MAX  );
   printf( "uint16_t  %20d  %20d\n"     , 0         , USHRT_MAX  );
   printf( "uint32_t  %20d  %20u\n"     , 0         , UINT_MAX   );
   printf( "uint64_t  %20d  %20llu\n"   , 0         , ULLONG_MAX );
   printf( "\n" );
   printf( "============================================================\n");
   printf( "Ranges for real number data types in C\n" );
   printf( "------------------------------------------------------------\n");
   printf( "float        %14.7g  %14.7g\n"   , FLT_MIN  , FLT_MAX  );
   printf( "double       %14.7g  %14.7g\n"   , DBL_MIN  , DBL_MAX  );
   printf( "long double  %14.7Lg  %14.7Lg\n" , LDBL_MIN , LDBL_MAX );





   return 0;
}