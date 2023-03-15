#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main_14()
{
	char c;
	char prev;				//读入前一个字符
	long n_chars = 0L;		//字符数
	int n_lines = 0;		//行数
	int n_words = 0;		//单词数
	int p_lines = 0;		//不完整的行数
	bool inword = false;	//如果c在单词中，inword等于true

	printf("enter text to be analyzed(|to terminate):\n");
	prev = '\n';			//用于识别完整的行
	while ((c = getchar()) != STOP)
	{
		n_chars++;			//统计字符
		if (c == '\n')
			n_lines++;		//统计行
		if (!isspace(c) && !inword)     //if(c!=''&&c!='\n'&& c!='\t' &&!inword)如果c不是空白字符，且如果c不在单词里
		{
			inword = true;
			n_words++;		//统计单词
		}
		if (isspace(c) && inword)
			inword = false;		//达到单词的词尾
		prev = c;				//保存字符的值
	}
	if (prev != '\n')
		p_lines = 1;
	printf("characters = %ld,word = %d,lines = %d", n_chars, n_words,
		n_words);
	printf("partial lines = %d\n", p_lines);

	return 0;
}