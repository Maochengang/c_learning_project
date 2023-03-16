#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main_20()
{
	int ch;
	FILE* fp;
	char fname[50];			//存储文件名

	printf("enter the name of the file:");
	scanf("%s", fname);
	fp = fopen(fname, "r");	//打开待读取的文件
	if (fp == NULL)			//如果失败
	{
		printf("failed to open file.bye\n");
		exit(1);			//退出程序

	}
	//getc(fp)从打开的文件中获取一个字符
	while ((ch = getc(fp) != EOF))
		putchar(ch);
	fclose(fp);				//关闭文件

	return 0;
}