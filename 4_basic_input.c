#include<stdio.h>
void main()
{
    // DEFINITON OF VARIABLE : WHEN WE CREATE A VARIABLE WE CALL IT DEFINITION
    int a,b,c; // DECLARING MULTIPLE VARIABLE IN ONE LINE

    // INITALIZATION OF VARIABLE
    a=10;  // WHEN ASSIGNING A VALUE TO A VARIABLE IS CALLED INITIALIZATION

    printf("\n value of a = %d",a);

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

    printf("Enter Your First name = ");
    scanf("%s",&Fname); // GETTING INPUT FROM THE USER HERE "%s" 
    






    return 0;
}