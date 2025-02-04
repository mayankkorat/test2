#include "mathop.h"  // Include the header file

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b)
{
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b)
{
    return a * b;
}

// Function to divide two numbers
float divide(int a, int b)
{
    if (b != 0)
    {
        return (float)a / b;
    }
    else
    {
        printf("Error: Division by zero\n");
        return 0.0f;
    }
}
