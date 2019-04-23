#include "functions.h"
#include <stdio.h>

int main()
{
	int i, n, item;
	while (item != 9) {
	printf("Calculator menu\n");
	printf("1.Plus\n2.Minus\n3.Multiplication\n4.Division\n9. Quit");
	printf("\nInput item: ");
	scanf("%d", &item);
	switch (item) {
			case 1:
		{
			printf("Input amout of numbers: ");
			scanf("%d", &n);
			float A[n];
			printf("Enter numbers: ");
			for (i = 0; i < n; i++)
			scanf("%f", &A[i]);
			printf("Value: %.4f\n", PLUS(A, n));
		}
		break;
			case 2:
		{
			printf("Input amout of numbers: ");
			scanf("%d", &n);
			float A[n];
			printf("Enter numbers: ");
			for (i = 0; i < n; i++)
			scanf("%f", &A[i]);
			printf("Value: %.4f\n", MINUS(A, n));
		}
		break;
			case 3:
		{
			printf("Input amout of numbers: ");
			scanf("%d", &n);
			float A[n];
			printf("Enter numbers: ");
			for (i = 0; i < n; i++)
			scanf("%f", &A[i]);
			printf("Value: %.4f\n", MULTIPLICATION(A, n));
		}
		break;
			case 4:
		{
			float a, b, c, f;
			printf("Enter dividend and divisor: ");
			scanf("%f %f", &a, &b);
			f = DIVISON(a, b, &c);
			if(f == 0)
			{
				printf("Value: %.4f\n", c);
			}
			else
			{
				printf("Invalid value");
			}
		}
		break;
}
}
return 0;
}
