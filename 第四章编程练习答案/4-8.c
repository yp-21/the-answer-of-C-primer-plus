#include<stdio.h>

int main()
{
	const double a = 3.785;
	const double b = 1.609;
	double lc,qyl,hyl;
		
	printf("请输入旅行的里程(英里)：");
	scanf("%lf",&lc); 
	printf("请输入消耗的汽油量(加仑)：");
	scanf("%lf",&qyl); 
	
	printf("每加仑汽油行驶的英里数（英里/加仑）：%.1lf\n",lc/qyl);
	printf("每加仑汽油行驶的英里数（升/100公里）：%.5lf", (qyl*a) / (lc*b*100));
	
	return 0;
}
