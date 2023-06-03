#include<stdio.h>
int main()
{
    //this is single comment line

    /*
    this
    is
    multi commnet line
    */

    //# HOW TO PRINT STRINGS ?

        //## HERE ALL THE CHARACTERS ARE COUNTED AS STRING (STRINGS: THEY ARE JUST SYMBOLS WE CAN'T APPLY MATHS ON THEM.)
        printf("Hello GitHub Community.");

        //## HERE THE NUMBER I USED HERE 1 IS ALSO COUNT AS A STRING AND THE SYMBOLS ( , AND !) ARE ALSO STRING (THEY ARE USELESS SYMBOLS JUST USED TO DISPLAY MESSAGE)
        printf("I was born on 1 july, Not really JK !");

    //# HOW TO PRINT Messages in Multi line ?

        //## IF YOU HAD RUNNED THE ABOVE CODE IT SEEM LIKE "Hello GitHub Community.I was born on 1 july, Not really JK !"
        //   TO PRINT A MESSAGE IN MULTI LINE WE USE SPECIAL CHARACTERS
        printf("\nNow i can print\nAs much lines\nas i want.\n");
        //## THERE ARE MANY SPEACIAL CHARACTERS LIKE \" , \t AND MANY MORE YOU CAN SEARCH.

    //# HOW TO PRINT NUMBERS AND DIGITS (NOT AS A STRING BUT AS A NUMBER)

        printf("This is an example of printing a number %d\n",1234);
        printf("This is an another example of printing number with performing some arithemtic operation %d + %d = %d\n",100,18,128);
        //## %d IS A TYPE OF FORMAT SPECIFIER THERE ARE OTHER FORMAT SPECIFIER FOR PRINTING OTHER TYPES OF DATA
        //   %d IS USED FOR INTEGERS
        //   %c IS USED FOR SINGLE CHARACTER
        //   %s IS USED OF WORDS
        //   %f OR %lf IS USED FOR DECIMAL NUMBERS
        //   AND ALSO REMEMBER THE ORDER OF FORMAT SPECIFIER AND DATA VALUES YOU ARE PRINTING.
        printf("Now This is an example of printing number = %d, float = %f, Character = %c, Word = %s\n",111,111.111,"c","Always rember to put Strings and Characters inside double quotes");
        //## AS YOU CAN SEE IN THE FLOAT I PRINTED 111.111 BUT IT PRINTED 111.111000 THIS IS BECAUSE BY DEFAULT IT SHOWS UPTO 6 SIGNIFICANT FIGURES,
        //   TO CHABGE IT YOU NEED TO DEFINE SIGNIFICANT FIGUERS IN FORMAT SPECIFIER LIKE %.3F 3 REPRESENT SIGNIFICANT FIGURES AFTER DECIMAL
        printf("For example %.3f , %.2f, %.2f ,%.4f",11111.11111,11111.11111,11111.11111,11111.11111);

    //# THIS IS ALL YOU NEED TO KNOW IN BASIC OUTPUT IN C LANGUAGE

        printf("\n THE END OF EPISODE 1");
        
    
}