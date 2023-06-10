#include<stdio.h>
int main()
{
    // DEFINITON OF VARIABLE : WHEN WE CREATE A VARIABLE WE CALL IT DEFINITION
    int a,b,c; // DECLARING MULTIPLE VARIABLE IN ONE LINE

    // INITALIZATION OF VARIABLE
    a=10;  // WHEN ASSIGNING A VALUE TO A VARIABLE IS CALLED INITIALIZATION

    printf("\nvalue of a = %d",a);

    // REASSIGNING NEW VALUE TO "a"
    a=20;
    printf("\nNew ressign value of a = %d",a); // ALWAYS REMEMBER THE ORDER OF ASSIGNING VALUE TO A VARIABLE, IT WILL HOLD THE LATEST VALUE ASSIGNED TO IT

    // # HOW TO TAKE INPUT FROM ANY USER ?
    // TO TAKE ANY KIND OF INPUT FROM A USER WE NEED A DEFINED VARIABLE TO STORE THE VALUE GIVEN BY THE USER 
    // FIRST FIGURE OUT THE TYPE OF DATA YOU WANT TO GATHER FROM USER AND THEN DEFINE A VARIABLE OF THAT DATA TYPE
    // IF YOU WANT TO PERFORM ARITHMETIC OPERATIONS THEN USE INTERGER OR FLOAT OR DOUBLE
    // IF YOU WANT TO STORE WORDS USE CHAR
    // IF YOU WANT TO STORE COMBINATION OF ALPHABATE AND NUMBERS THEN USE CHAR BUT YOU WONT BE ABLE TO PERFORM ANY OPERATION WITH THEM

    // LETS SAY FOR EXAMPLE WE WANT TO STORE A PERSON NAME AGE AND INCOME
    char Fname[10],Lname[10];
    int age;
    double income;
    //# TO TAKE INPUT IN VSCODE YOU NEED TO CONFIGURE SETTINGS, GO TO --> SETTINGS --> RUN CODE CONFIGURATION -- ENABLE RUN IN TERMINAL 
    printf("\nEnter Your First name = ");
    scanf("%s",&Fname); // GETTING INPUT FROM THE USER HERE "%s" IS FORMAT SPECIFIER FOR WORDS WHOSE LENGTH GRATER THAN 1 AND "&" IS AN ATTRIBUTE THAT ACCESS THE MEMORY LOCATION OF "Fname" VARIABLE
    printf("\nEnter Your First name = ");
    scanf("%s",&Lname);
    printf("\nEnter Your age = ");
    scanf("%d,&age");
    printf("\nEnter Your salary = ");
    scanf("%lf",&income);

    printf("\n++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n++ First name =           %15s ++",Fname);
    printf("\n++ Last name  =           %15s ++",Lname);
    printf("\n++ age        =           %15d ++",age);
    printf("\n++ Income     =          %16lf ++",income);
    printf("\n++++++++++++++++++++++++++++++++++++++++++++\n");
    //# WHILE GETTING INPUT WORDS OR STRINGS FROM USER THERE IS TRICKY PROBLEM WE HAVE TO DEAL, WHEN YOU ENTER TWO WORDS SEPERATED BY SPACE FROM EACH OTHER ONLY THEN FIRST WORD GET ACCEPTED BY COMPILER
    // THIS IS BECAUSE %S IS FOR COMBINATION OF CHARACTERS AND IT READS CHARACTER ONE BY ONE AND WHEN THERE IS AN SPACE IS WORD IT THINK OF IT AS END OF LINE
    // TO OVERCOME THIS PROBLEM WE USE "%[^\n]s"

    char message[500];
    printf("\nWrite a message for your future self in not more than 500 letters : ");
    scanf(" %[^\n]s ",message);
    printf("There is a message for you by your past self, few moment ago : \n%s",message);


    






    return 0;
}