#include <stdio.h>

int main() 
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /*
    Here, we take input from the user for the number of rows in the triangle. Then, we use two loops - the outer loop to iterate over the rows, and the inner loop to print the asterisks for each row.

    For each row, we print i number of asterisks (starting from 1 and going up to the current row number). Then, we print a newline character to move to the next row.

    This will print a triangle pattern made of asterisks, with the number of rows specified by the user. You can modify this pattern or try creating your own patterns using loops in C.
    */

    return 0;
}
