#include<stdio.h>
int main_4(void)
{
	int num;

	printf("   sn    n cubed\n");
	for (num = 1; num <= 6; num++)
		printf("%5d %5d\n", num, num * num * num);
	
	return 0;
}