#include <stdio.h>

int square(int n) {
    return n * n;
}

int main(void) {
    int result;
    result = square(3);
    printf("The square of 3 is: %d\n", result);
    return 0;
}