#include <stdio.h>

int sumTwo(int a, int b) {
    return a + b;
}

int main(void) {
    int result;
    result = sumTwo(5, 10);
    printf("The sum of 5 and 10 is: %d\n",result);

    return 0;
}