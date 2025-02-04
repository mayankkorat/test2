#include <stdio.h>
#include "mathop.h"  // Include the header file for math functions

int main()
{
    int a = 5, b = 3;

    // Use functions from mathop.c
    int   sum = add(a, b);
    int   diff = subtract(a, b);
    int   prod = multiply(a, b);
    float quotient = divide(a, b);

    /* Comment added to conflict it */
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}
