//演示与用户交互
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#define DENSITY 62.4
int main_6()
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Hi! what is your first name?\n");
	scanf("%s", name);
	printf("%s,what is your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("well,%s,your volume is %2.2f cubic feet.\n",name,volume);
	printf("also,your first name has %d letters.\n",letters);
	printf("and we have %d bytes to store it.\n", size);

	return 0;

}