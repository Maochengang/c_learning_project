#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main_20()
{
	int ch;
	FILE* fp;
	char fname[50];			//�洢�ļ���

	printf("enter the name of the file:");
	scanf("%s", fname);
	fp = fopen(fname, "r");	//�򿪴���ȡ���ļ�
	if (fp == NULL)			//���ʧ��
	{
		printf("failed to open file.bye\n");
		exit(1);			//�˳�����

	}
	//getc(fp)�Ӵ򿪵��ļ��л�ȡһ���ַ�
	while ((ch = getc(fp) != EOF))
		putchar(ch);
	fclose(fp);				//�ر��ļ�

	return 0;
}