#include<stdio.h>
#define SPACE ' '				//SPACE��ʾ������-�ո�-������
int main_12(void)
{
	char ch;

	ch = getchar();				//��ȡһ���ַ�
	while (ch != '\n')
	{
		if (ch == SPACE)
			putchar(ch);		//���ַ�����
		else
			putchar(ch + 1);
		ch = getchar();
	}
	putchar(ch);				//��ӡ���з�

	return 0;
}
//789�� �����滻��
//while((ch=getchar())!='\n'){}