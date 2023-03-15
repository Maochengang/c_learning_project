#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main_16(void)
{
	float length, width;

	printf("enter the length of the rectangle:\n");
	while (scanf("%f", &length) == 1)
	{
		printf("length = %0.2f:\n", length);
		printf("enter its width:\n");
		if (scanf("%f", &width) != 1)
			break;
		printf("width = %0.2f:\n", width);
		printf("area = %0.2f:\n", length * width);
		printf("enter the length of rectangle.\n");

	}
	printf("done.\n");

	return 0;
}