#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void display1(char cr, int lines, int width);
int main_26(void)
{
	int ch;						/*����ӡ�ַ�*/
	int rows, cols;				/*����������*/

	printf("enter a  character and two integers:\n");
	while ((ch = getchar()) != '\n')
	{
		if (scanf("%d %d", &rows, &cols) != 2)
			break;
		display1(ch, rows, cols);
		while (getchar() != '\n')
			continue;
		printf("enter another character and two integer;\n");
		printf("enter a newline to  quit.\n");
	}
	printf("bye.\n");

	return 0;
}

void display1(char cr, int lines, int width)
{
	int row, col;

	for (row = 1; row <= lines, row++;)
	{
		for (col = 1; col <= width; col++)
			putchar(cr);
		putchar('\n');					/*����һ�в���ʼ�µ�һ��*/
	}
}