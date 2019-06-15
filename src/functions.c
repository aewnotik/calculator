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

float DIVISION(float a, float b)
{
    float c;
    if (b == 0)
        return 0;
    else {
        c = a / b;
        return c;
    }
}

float RADICAL(float a)
{
    float value;
    if (a < 0) {
        return -1.0;
    } else {
        value = sqrt(a);
        return value;
    }
}

int FACTORIAL(int a)
{
    if (a == 1)
        return 1;
    else
        return a * FACTORIAL(a - 1);
}

float EXPONENT(float x, float y)
{
    return pow(x, y);
}
