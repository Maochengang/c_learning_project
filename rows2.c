#include<stdio.h>

int main_8(void)
{
	const int ROWS = 6;
	const int CHARS = 6;
	int row;
	char ch;

	for (row = 0; row < ROWS; row++)
	{
		for (ch = 'A', ch < ('A' + CHARS); ch++;)
			printf("%c", ch);
		printf("\n");
	}
	return 0;

}