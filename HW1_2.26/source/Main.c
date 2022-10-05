#include <stdio.h>

int main() {
	int a, b, c;
	printf("Enter first number:");
	scanf_s("%d", &a);
	printf("Enter second number:");
	scanf_s("%d", &b);
	if (a > b)
	{
		c = a % b;
		if (c == 0)
		{
			printf("The first number is a multiple of the second number\n");
		}
		else
		{
			printf("The first number is not a multiple of the second number\n");
		}
	}
	else if (b > a)
	{
		
		c = b % a;
		if (c == 0)
		{
			printf("The second number is a multiple of the first number\n");
		}
		else
		{
			printf("The second number is not a multiple of the first number\n");
		}
	}
	else
	{
		printf("Two numbers are equal");
	}
}