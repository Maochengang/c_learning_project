#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
/*输出有bug待更改*/
int main_9()
{	
	char name[40];
	int cash=0;
	printf("what is your name?");
	scanf("%d", name);
	printf("how many cash do you have?");
	scanf("f", cash);

	printf("the %d family just may be $%f dollars richer!\n ", name,cash);
	

	return 0;
}