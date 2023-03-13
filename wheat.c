#include<stdio.h>
#define SQUARES 64		//棋盘中的方格数
int main_17(void)
{
	const double CROP = 2E16;   //世界小麦年产谷粒数
	double current, total;
	int count = 1;

	printf("square     grains     total");
	printf("fraction of \n");
	printf("         added      grains");
	printf("wolrd  total\n");
	total = current = 1.0;		//从第一颗谷粒开始
	printf("%4d  %13.2e   %12.2e   %12.2e \n", count, current, total, total / CROP);

	while (count < SQUARES)
	{
		count = count + 1;
		current = 2.0 * current;		/*下一个方格谷粒翻倍*/
		total = current + total;
		printf("%4d %13.2e %12.2e %12.2e \n", count, current, total, total / CROP);
	}

	printf("that is all.\n");

	return 0;
}