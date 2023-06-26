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
