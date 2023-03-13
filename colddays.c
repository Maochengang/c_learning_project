#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main_11(void)
{
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;
	printf("enter the list of daily low temperature.\n");
	printf("use celsius, and enter q to quit.\n");
	while (scanf("%f", &temperature) == 1)
	{
		all_days++;
		if (temperature < FREEZING)
			cold_days++;
	}
	if (all_days != 0)
		printf("%d days total:%.1f%% were below freezing.\n",
			all_days, 100.0 * (float)cold_days / all_days);
	if (all_days == 0)
		printf("no data entered!\n");


	return 0;
}