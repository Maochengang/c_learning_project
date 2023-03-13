#include<stdio.h>
void pound(int n);
void main_26()
{
	int times = 5;
	char ch = '!';			//ASCIIÂëÊÇ33
	float f = 6.0;

	pound(times);
	pound(ch);
	pound(f);

	return 0;
}
void pound(int n)
{
	while (n-- > 0)
		printf("#");
	printf("\n");
}