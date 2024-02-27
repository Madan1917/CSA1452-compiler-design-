#include <stdio.h>

int main() {
    int a, b, c, d, result1, result2;

    // Common subexpression: a + b
    a = 5;
    b = 10;
    result1 = a + b;
    result2 = a + b;

    // Other computations
    c = result1 * 2;
    d = result2 - 3;

    // Print results
    printf("Result 1: %d\n", c);
    printf("Result 2: %d\n", d);

    return 0;
}
