#include<stdio.h>
int main()
{
    // LOOPING IS DOING A TASK AGAIN AND AGAIN IN A CYCLE UNTIL A CERTAIN PARAMETER IS SATISFIED
    // EXAMPLE : PRINT 0 TO 10 (WE WILL DO IT BY TO APPROACH)
    printf("\nprinting by approach 1: 1 2 3 4 5 6 7 8 9 10");
    
    int i=1;
    printf("\nprinting by approach 2: ");
    while(i<=10)
    {
        printf("%d ",i);
        i++;
    }

    printf("\n\n");
    // THERE ARE 3 TYPES OF LOOPS
    // 1: WHILE LOOP (HERE WE FIRST CHECK THE COMPLETION CONDITION AFTER THAT COMPILER EXECUTE THE CODE IS THE WHILE BLOCK)

    int a=0; // INITIALISATION
    while(a<=9)// LOOP TERMINATION CONDITION (IF NOT GIVEN IT WILL STUCK IN THIS LOOP FOR ETERNITY)
    {
        printf("\nthis is an example of while loop : %d",a);
        a++; // INCRIMINATION TO KEEP THIS LOOP MOVING FORWARD 
    }
    printf("\n\n");
    // 2: DO WHILE LOOP (SAME AS WHILE BUT IT EXECUTE THE BLOCK CODE BEFORE CHECKING THE LOOP TERMINATION CONDITION)
    int b=0; // INITIALISATION
    do
    {
        printf("\nthis is an example of do while loop: %d",b);
        b++;    // INCRIMINATION TO KEEP THIS LOOP MOVING FORWARD 
    } while (b<=9); // LOOP TERMINATION CONDITION (IF NOT GIVEN IT WILL STUCK IN THIS LOOP FOR ETERNITY)
    

    return 0;
}