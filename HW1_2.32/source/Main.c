#include <stdio.h>


float w, h, BMI;
int a;
int main() 
{
	printf("�Ҧ����\n �^�S�^�`����1\n ���礽�س���2\n");
	scanf_s("%d", &a);
	printf("Your weight:");
	scanf_s("%f", &w);
	printf("Your height:");
	scanf_s("%f", &h);
	if (a == 1)
	{
		BMI = (w * 703) / (h*h);
	}
	else if (a == 2)
	{
		BMI = w / (h*h);
	}
	printf("your BMI = %.2f\n\n", BMI);
	printf("BMI VALUS \n");
	printf("Underweight: less then 18.5 \n");
	printf("Normal:      between 18.5 and 24.9 \n");
	printf("Overweight:  between 25 and 29.9 \n");
	printf("Obese:       30 or greater \n");
}