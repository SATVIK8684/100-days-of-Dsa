//Problem: Given integers a and b, compute a^b using recursion without using pow() function.
#include <stdio.h>

// Recursive function to compute a^b
long long power(int a, int b) {
    if(b == 0)
        return 1;        // Base case: a^0 = 1

    return a * power(a, b - 1);
}

int main() {
    int a, b;

    // Input a and b
    scanf("%d %d", &a, &b);

    if(b < 0) {
        printf("Exponent should be non-negative");
        return 0;
    }

    long long result = power(a, b);

    printf("%lld\n", result);

    return 0;
}
