#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


int main_5(void)
{
	float salary;

	printf("\aenter your desired monthly salary:");
	printf("$______\b\b\b\b\b\b");
	scanf("%f",&salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
	printf("\rGee!\n");

	return 0;
}