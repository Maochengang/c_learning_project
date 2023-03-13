#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double power(double n, int p);		//ansi函数原型
int main_10(void)
{
	double x, xpow;
	int exp;

	printf("enter a number and the positive power");
	printf("to which\nthe number will be raised. Enter q");
	printf("to quit.\n");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);	//函数调用
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("enter next pair of numbers or q to quit.\n");

	}
	printf("hope you enjoyed this power trip--bye!\n");

	return 0;
}

double power(double n, int p)     //函数定义
{
	double pow = 1;
	int i;

	for (i = 1; i <= p; i++)
		pow *= n;

	return pow;						//返回pow值
}