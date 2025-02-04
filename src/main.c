#include <stdio.h>
#include "mathop.h"  // Include the header file for math functions

int main()
{
    int a = 8, b = 4;
    int sum, diff, prod, quotient;

    // Use functions from mathop
    sum = add(a, b);
    diff = subtract(a, b);
    prod = multiply(a, b);
    quotient = divide(a, b);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient Result: %.2f\n", quotient);

    a = 13;
    b = 5;

    sum = add(a, b);
    diff = subtract(a, b);
    prod = multiply(a, b);
    quotient = divide(a, b);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient Result: %.2f\n", quotient);

    /* Exit from the program */
    printf("Exit from main\n");
    return 0;
}
