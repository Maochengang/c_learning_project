#define _CRT_SECURE_NO_WARNINGS    //使用scanf在vs中防止报错
#include<stdio.h>
int main_12(void)
{
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;
	printf("enter a field width:\n");
	scanf("%d", &width);
	printf("the number is :%d:\n", width, number);
	printf("now enter a width and a precision:\n");
	scanf("%d %d", &width, &precision);
	printf("weight = %*.*f\n", width, precision, weight);
	printf("done!\n");

	return 0;
}