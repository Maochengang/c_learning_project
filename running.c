#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
const int S_PER_M = 60;    //һ���ӵ�����
const int S_PER_H = 3600;		//һСʱ������
const double M_PER_K = 0.62137;   //һ�����Ӣ����
int main_28(void)
{
	double distk, distm;			//�ܹ��ľ���
	double rate;					//ƽ���ٶ�
	int min, sec;					//�ܲ���ʱ
	int time;						//�ܲ���ʱ
	double mtime;					//��һӢ������Ҫ��ʱ��
	int mmin, msec;					//��һӢ����Ҫ��ʱ��

	printf("this program converts your time for a metric race\n");
	printf("to a time for running a mile and to your average\n");
	printf("speed in miles per hour.\n");
	printf("please enter, in kilometres, the distance run.\n");
	scanf("%lf", &distk);					//%lf��ʾ��ȡһ��double���͵�ֵ
	printf("please enter the time in minnutes and seconds.\n");
	printf("begin by entering the minutes\n");
	scanf("%d", &min);
	printf("now enter the seconds.\n");
	scanf("%d", &sec);

	time = S_PER_M * min + sec;				//��ʱ��ת������
	distm = M_PER_K * distk;				//�ѹ���ת����Ӣ��
	rate = distm / time * S_PER_H;			//Ӣ��/��
	mtime = (double)time / distm;			//ʱ��/����
	mmin = (int)mtime / S_PER_M;			//���ʣ�ಽ��
	msec = (int)mtime % S_PER_M;

	printf("you ran %1.2f km (%1.2f miles) in %d min,%d sec.\n", distk, distm, min, sec);
	printf("that pace correponds to running a mile in % d min, ", mmin);

	printf("%d sec.\n your average speed was %1.2f mph.\n",msec,rate);

	return 0;
}