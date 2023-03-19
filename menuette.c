#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);
int main(void)
{
	int choice;

	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
		case'a':printf("buy low,sell high.\n");
			break;
		}
	}
	printf("bye.\n");
	return 0;

}

void count(void)
{
	int n, i;
	printf("count how far?enter an integer:\n");
	n = get_int();
	for (i = 1; i <= n; i++)
		printf("%d\n", i);
	while (getchar() != '\n')
		continue;
}

char get_choice(void)
{
	int ch;

	printf("enter the letter of your choice:\n");
	printf("a.advice			b.bell\n");
	printf("c.count             q.quit\n");
	ch = get_first();
	while ((ch < 'a' || ch > 'c') && ch != 'q')
	{
		printf("please respond with a,b,c,or q.\n");
		ch = get_first();
	}
	return ch;
}
char get_first(void)
{
	int ch;

	ch = getchar();
	while (getchar()!= '\n')
		continue;

	return ch;

}

int get_int(void)
{
	int input;
	char ch;

	while (scanf("%d", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf("is not an integer.\nplease enter an");
		printf("integer value,such as 25,-178,or 3:");
	}
	return input;
}