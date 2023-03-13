#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
const int S_PER_M = 60;    //一分钟的秒数
const int S_PER_H = 3600;		//一小时的秒数
const double M_PER_K = 0.62137;   //一公里的英里数
int main_28(void)
{
	double distk, distm;			//跑过的距离
	double rate;					//平均速度
	int min, sec;					//跑步用时
	int time;						//跑步用时
	double mtime;					//跑一英里所需要的时间
	int mmin, msec;					//跑一英里需要的时间

	printf("this program converts your time for a metric race\n");
	printf("to a time for running a mile and to your average\n");
	printf("speed in miles per hour.\n");
	printf("please enter, in kilometres, the distance run.\n");
	scanf("%lf", &distk);					//%lf表示读取一个double类型的值
	printf("please enter the time in minnutes and seconds.\n");
	printf("begin by entering the minutes\n");
	scanf("%d", &min);
	printf("now enter the seconds.\n");
	scanf("%d", &sec);

	time = S_PER_M * min + sec;				//把时间转化成秒
	distm = M_PER_K * distk;				//把公里转化成英里
	rate = distm / time * S_PER_H;			//英里/秒
	mtime = (double)time / distm;			//时间/距离
	mmin = (int)mtime / S_PER_M;			//求出剩余步数
	msec = (int)mtime % S_PER_M;

	printf("you ran %1.2f km (%1.2f miles) in %d min,%d sec.\n", distk, distm, min, sec);
	printf("that pace correponds to running a mile in % d min, ", mmin);

	printf("%d sec.\n your average speed was %1.2f mph.\n",msec,rate);

	return 0;
}