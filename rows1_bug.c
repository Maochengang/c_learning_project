#include<stdio.h>
#define ROWS 6
#define CHARS 2

#include<math.h>
int main_6(void)
{
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