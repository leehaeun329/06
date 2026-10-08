#include <stdio.h>

int get_max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main(void) {
    int a = 15;
    int b = 25;
    int max_value = get_max(a, b);
    printf("The maximum value between %d and %d is: %d\n", a, b, max_value);
    return 0;  
}