#include<stdio.h>
#include<ctype.h>
int main_15(void)

{
	char ch;
	
	while ((ch = getchar() != '\n'))
	{
		if (isalpha(ch))
			putchar(ch + 1); 
		else
			putchar(ch);		//ԭ����ʾ

	}
	putchar(ch);

	return 0;
}