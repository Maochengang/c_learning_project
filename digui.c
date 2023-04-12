#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int fibo(int n)
{
	
	if (n == 1 || n == 2) 
	{
		return 1;

	}
			
	else 
	{
		return	n = fibo(n - 1) + fibo(n - 2);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int m = fibo(n);
	printf("%d", m);
	return 0;
}