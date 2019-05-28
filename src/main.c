#include "functions.h"
#include <stdio.h>

int main()
{
    int i, n, item;
    while (item != 9) {
        printf("Calculator menu\n");
        printf("1.Plus\n2.Minus\n3.Multiplication\n4.Division\n5.Radical\n6."
               "Factorial\n7.Exponent\n9. Quit");
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
            printf("Value: %.4f\n", PLUS(A, n));
        } break;
        case 2: {
            printf("Input amout of numbers: ");
            scanf("%d", &n);
            float A[n];
            printf("Enter numbers: ");
            for (i = 0; i < n; i++)
                scanf("%f", &A[i]);
            printf("Value: %.4f\n", MINUS(A, n));
        } break;
        case 3: {
            printf("Input amout of numbers: ");
            scanf("%d", &n);
            float A[n];
            printf("Enter numbers: ");
            for (i = 0; i < n; i++)
                scanf("%f", &A[i]);
            printf("Value: %.4f\n", MULTIPLICATION(A, n));
        } break;
        case 4: {
            float a, b, c, f;
            printf("Enter dividend and divisor: ");
            scanf("%f %f", &a, &b);
            f = DIVISION(a, b, &c);
            if (f == 0) {
                printf("Value: %.4f\n", c);
            } else {
                printf("Invalid value");
            }
        } break;
        case 5:
            {
                float a;
                printf("Enter the number to extract the radical: ");
                scanf("%f", &a);
                if (RADICAL(a) != -1) {
                    printf("Root = %d", RADICAL(a));
                } else
                    printf("Negative value");
            }
            break;
        case 6: {
            printf("Enter the number for factorial: ");
            scanf("%d", &n);
            printf("Factorial = %d", FACTORIAL(n));
        } break;
        case 8: {
            float x, y;
            printf("Enter the number and extent: ");
            scanf("%f %f", &x, &y);
            printf("x^y = %.4f\n", EXPONENT(x, y));
        }
        default:
            break;
        }
}
