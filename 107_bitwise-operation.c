#include <stdio.h>

int main() {

    // BITWISE AND OPERATOR &
    int a = 12, b = 25;
    printf("\nOutput = %d", a & b);

    // BITWISE OR OPERATOR |
    printf("\nOutput = %d", a | b);

    // BITWISE XOR (EXCLUSIVE OR) OPERATOR ^
    printf("\nOutput = %d", a ^ b);

    // BITWISE COMPLEMENT OPERATOR ~
    printf("\nOutput = %d\n", ~35);
    printf("\nOutput = %d\n", ~-12);

    // RIGHT SHIFT OPERATOR (RIGHT SHIFT OPERATOR SHIFTS ALL BITS TOWARDS RIGHT BY CERTAIN NUMBER OF SPECIFIED BITS. IT IS DENOTED BY >>)
    int num=212, i;

    for (i = 0; i <= 2; ++i) {
        printf("Right shift by %d: %d\n", i, num >> i);
    }

    // LEFT SHIFT OPERATOR (LEFT SHIFT OPERATOR SHIFTS ALL BITS TOWARDS LEFT BY A CERTAIN NUMBER OF SPECIFIED BITS. THE BIT POSITIONS THAT HAVE BEEN VACATED BY THE LEFT SHIFT OPERATOR ARE FILLED WITH 0. THE SYMBOL OF THE LEFT SHIFT OPERATOR IS <<)
    printf("\n");

    for (i = 0; i <= 2; ++i) {
        printf("Left shift by %d: %d\n", i, num << i);    
    }
    return 0;
}