#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;

	printf("give me letter of the alphabet,and i will give");
	printf("an aninmal name\nbeginning with that letter.\n");
	printf("please type in a letter;type # to end my act.\n");
	while ((ch = getchar()!='#'))
	{
		if ('\n' == ch)
			continue;
		if (islower(ch))
			switch (ch)
			{
			case 'a':printf("argali,a wild sheep of Asia");
				break;
			default:
				printf("that is a stumper!\n");

			}
		else
			printf("i recognize only lowercase letters!\n");
		while (getchar() != '\n')
			continue;
		printf("please type another letter or a #.\n");
	}
	printf("bye!\n");

	return 0;
}