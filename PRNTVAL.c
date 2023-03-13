#include<stdio.h>
int main_11(void)
{
	int bph2o = 212;
	int rv;

	rv = printf("%d F is water's boiling point.\n", bph2o);
	printf("the printf() function printed %d characters.\n",rv);
	
	return 0;
}