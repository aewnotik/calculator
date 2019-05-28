#include "functions.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


float PLUS(float* A, int n)
{
    int i;
    float value = 0;
    for (i = 0; i < n; i++)
        value += A[i];
    return value;
}

float MINUS(float* A, int n)
{
    int i;
    float value = A[0];
    for (i = 1; i < n; i++)
        value -= A[i];
    return value;
}

float MULTIPLICATION(float* A, int n)
{
    int i;
    float value = 1;
    for (i = 0; i < n; i++)
        value *= A[i];
    return value;
}

float DIVISION(float a, float b, float* c)
{
    if (b == 0)
        return -1;
    else {
        *c = a / b;
        return 0;
    }
}

int RADICAL(float a)
{
    float value;
    if (a < 0) {
        return -1.0;
    } else {
        value = sqrt(a);
        return value;
    }
}

int FACTORIAL(float a)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

float EXPONENT(float x, float y)
{
    return pow(x, y);
}
