#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
#define PAR 72
int main_8()
{
	int index, score[SIZE];
	int sum = 0;
	float average;

	printf("enter %d gplf scores:\n", SIZE);
	for (index = 0; index < SIZE; index++)	
		scanf("%d", &score[index]);		//读取10个分数
	printf("the scores read in as follows:\n");
	for (index = 0; index < SIZE; index++)
		printf("%5d", score[index]);
	printf("\n");
	for (index = 0; index < SIZE; index++)
		sum += score[index];
	average = (float)sum / SIZE;		//求平均分
	printf("sum of scores = %d,average scores = %.2f\n", sum, average);
	printf("that is a handicap of %.0f.\n", average - PAR);

	return 0;

}