#include<stdio.h>
#include<inttypes.h>

int main_2(void) 
{
	int32_t me32;
	me32 = 45933945;
	printf("first,assume int32_t is int\n");
	printf("instead use a \"macro\" from inttypes.h:\n");
	printf("hello world,C\n");

	return 0;
}