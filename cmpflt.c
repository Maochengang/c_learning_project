#define _CRT_SECURE_NO_WARNINGS 
#include<math.h>
#include<stdio.h>

int main_31(void)
{
	const double ANSWER = 3.14159;
	double response;

	printf("what is the value of pi?\n");
	scanf("%lf", &response);
	while (fabs(response - ANSWER) > 0.0001)
	{
		printf("TRY AGAIN!\n");
		scanf("%ld", &response);

	}
	printf("close enough!\n");

	return 0;

}