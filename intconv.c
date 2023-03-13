#include<stdio.h>
#define PAGES 336
#define WORDS 65618

int main_10(void)
{
	short num = PAGES;
	short mnum = -PAGES;
	
	printf("NUM AS SHIRT AND UNSIGHED SHORT: %hd %hu\n", num, num);
	printf("-NUM AS short AND UNSIGHED SHORT: %hd %hu\n", mnum,mnum);
	printf("NUM AS int and char: %d %c\n", num, num);
	printf("NUM AS INT SHORT CHAR %hd %hu\n",WORDS,WORDS,WORDS);

	return 0;

}