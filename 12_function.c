#include <stdio.h>

// declaring a function called "add"
int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int x = 5;
    int y = 7;
    
    // calling the add function by passing x and y as arguments
    int result = add(x, y);
    
    // printing the result of the addition
    printf("%d + %d = %d", x, y, result);
    
    return 0;
}
