#include <stdio.h>

int main() {

    // BITWISE AND OPERATOR &
    int a = 12, b = 25;
    printf("Output = %d", a & b);

    // BITWISE OR OPERATOR |
    printf("Output = %d", a | b);

    // BITWISE XOR (EXCLUSIVE OR) OPERATOR ^
    printf("Output = %d", a ^ b);

    // BITWISE COMPLEMENT OPERATOR ~
    printf("Output = %d\n", ~35);
    printf("Output = %d\n", ~-12);

    // RIGHT SHIFT OPERATOR (RIGHT SHIFT OPERATOR SHIFTS ALL BITS TOWARDS RIGHT BY CERTAIN NUMBER OF SPECIFIED BITS. IT IS DENOTED BY >>)
    int num=212, i;

    for (i = 0; i <= 2; ++i) {
        printf("Right shift by %d: %d\n", i, num >> i);
    }

    return 0;
}