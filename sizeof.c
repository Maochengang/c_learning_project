#include<stdio.h>
int main_21(void)
{
	int n = 0;
	size_t intsize;

	intsize = sizeof(int);
	printf("n=%d,h has %zd bytes; all ints have %zd bytes .\n", n, sizeof n, intsize);

	return 0;

}