#include<stdio.h>


int main() {
	double a, b;
	char operator;

	printf("Enter operator: ");
	scanf("%c", &operator);

	printf("Enter num1: ");
	scanf("%lf", &a);

	printf("Enter num2: ");
	scanf("%lf", &b);

	switch (operator) {
		case '+':
			printf("%lf + %lf = %lf", a, b, a + b);
			break;

		case '-':
			printf("%lf - %lf = %lf", a, b, a - b);
			break;

		case '*':
			printf("%lf * %lf = %lf", a, b, a * b);
			break;

		case '/':
			printf("%lf / %lf = %lf", a, b, a * b);
			break;

		default:
			printf("invalid input");
			break;
	}

	return 0;

}

