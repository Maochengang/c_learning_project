#include<stdio.h>
#define SPACE ' '				//SPACE表示单引号-空格-单引号
int main_12(void)
{
	char ch;

	ch = getchar();				//读取一个字符
	while (ch != '\n')
	{
		if (ch == SPACE)
			putchar(ch);		//该字符不变
		else
			putchar(ch + 1);
		ch = getchar();
	}
	putchar(ch);				//打印换行符

	return 0;
}
//789行 可以替换成
//while((ch=getchar())!='\n'){}