#include <stdio.h>
#include "mathop.h"  // Include the header file for math functions

int main()
{
    int a = 5, b = 3;
    int sum, diff, prod, quotient;

    // Use functions from mathop.c
    sum = add(a, b);
    diff = subtract(a, b);
    prod = multiply(a, b);
    quotient = divide(a, b);

    /* It could create conflict */
    printf("Sum result: %d\n", sum);
    printf("Difference result: %d\n", diff);
    printf("Product result: %d\n", prod);
    printf("Quotient result: %.2f\n", quotient);

    a = 13;
    b = 5;

    sum = add(a, b);
    diff = subtract(a, b);
    prod = multiply(a, b);
    quotient = divide(a, b);

    /* It could create conflict */
    printf("Sum result: %d\n", sum);
    printf("Difference result: %d\n", diff);
    printf("Product result: %d\n", prod);
    printf("Quotient result: %.2f\n", quotient);

    /* Exit from the program */
    printf("Exit from main\n");
    return 0;
}
