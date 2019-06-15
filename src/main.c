#include "functions.h"
#include <stdio.h>

int main()
{
    int i, n, item;
    while (item != 8) {
        printf("Calculator menu\n");
        printf("1.Plus\n2.Minus\n3.Multiplication\n4.Division\n5.Radical\n6."
               "Factorial\n7.Exponent\n8. Quit");
        printf("\nInput item: ");
        scanf("%d", &item);
        switch (item) {
        case 1: {
            printf("Input amout of numbers: ");
            scanf("%d", &n);
            float A[n];
            printf("Enter numbers: ");
            for (i = 0; i < n; i++)
                scanf("%f", &A[i]);
            printf("\nValue: %.4f\n\n", PLUS(A, n));
        } break;
        case 2: {
            printf("Input amout of numbers: ");
            scanf("%d", &n);
            float A[n];
            printf("Enter numbers: ");
            for (i = 0; i < n; i++)
                scanf("%f", &A[i]);
            printf("\nValue: %.4f\n\n", MINUS(A, n));
        } break;
        case 3: {
            printf("Input amout of numbers: ");
            scanf("%d", &n);
            float A[n];
            printf("Enter numbers: ");
            for (i = 0; i < n; i++)
                scanf("%f", &A[i]);
            printf("\nValue: %.4f\n\n", MULTIPLICATION(A, n));
        } break;
        case 4: {
            float a, b, f;
            printf("Enter dividend and divisor: ");
            scanf("%f %f", &a, &b);
            f = DIVISION(a, b);
            if (f == 0) {
                printf("\nInvalid value\n");
            } else {
                printf("\nValue: %.4f\n\n", f);
            }
        } break;
        case 5: {
            float a;
            printf("Enter the number to extract the radical: ");
            scanf("%f", &a);
            if (RADICAL(a) >= 0) {
                printf("\nRoot = %f\n\n", RADICAL(a));
            } else
                printf("\nNegative value\n\n");
        } break;
        case 6: {
            int a;
            printf("Enter the number for factorial: ");
            scanf("%d", &a);
            printf("\nFactorial = %d\n\n", FACTORIAL(a));
        } break;
        case 7: {
            float x, y;
            printf("Enter the number and extent: ");
            scanf("%f %f", &x, &y);
            printf("\nx^y = %.4f\n\n", EXPONENT(x, y));
        }
        default:
            break;
        }
    }
}
