#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int combination(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(void) {
    int n, r;
    printf("enter n and r(n >= r): ");
    scanf("%d %d", &n, &r);
    if (n < r) {
        printf("Invalid input: n must be greater than or equal to r.\n");
        return 1;
    }   
    printf("C(%d, %d) = %d\n", n, r, combination(n, r));
    return 0;
}
