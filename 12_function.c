#include <stdio.h>

// declaring a function called "add"
int add(int a, int b) {
    int sum = a + b;
    return sum;
}

// declaring a function called "swap"
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
    int x = 5;
    int y = 7;
    
    // calling the add function by passing x and y as arguments
    int result = add(x, y);
    
    // printing the result of the addition
    printf("\n%d + %d = %d", x, y, result);

    int a = 1;
    int b = 2;
    printf("Before switching a = %d and b = %d",a,b);
    swap(&a, &b);
    printf("after switching a = %d and b = %d",a,b);
        
    return 0;
}
