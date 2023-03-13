#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma warning(disable:4996)
int main_27(void)
{
	long num = 0;			/*num 也需要初始化*/
	long sum = 0L;			/*把sum初始化*/
	int status;

	printf("please enter an integer to be summed");
	printf("(q to quit):");
	status = scanf("%ld", &sum);
	while (status == 1)		/*==的意思是“等于”*/
	{
		sum = sum + num;
		printf("please enter next integer(q to quit):");
		status = scanf("%ld", &num);
	}

	printf("those integers sum to %ld.\n", sum);

	return 0;
}