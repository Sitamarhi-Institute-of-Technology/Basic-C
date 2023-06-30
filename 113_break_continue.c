#include <stdio.h>

int main() {
    int i;

    // Using break statement to exit loop
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Breaking loop at i = %d\n", i);
            break;
        }
        printf("i = %d\n", i);
    }

    // Using continue statement to skip certain iterations
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;   // skipping even numbers
        }
        printf("i = %d\n", i);
    }

    return 0;
}

/*In this code, we have used two loops: for loop to iterate over the numbers 1 to 10. Inside the first loop, we have used the if statement to check if i is equal to 5. If it is, we use the break statement to exit the loop. This means that the loop will stop executing once it reaches i = 5.

After that, we have used another for loop to iterate over the numbers 1 to 10 again. Inside this loop, we have used the if statement to check if i is even. If it is, we use the continue statement to skip that iteration and move on to the next one. This means that the loop will not print any even numbers.*/