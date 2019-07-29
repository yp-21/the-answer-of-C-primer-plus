#include<stdio.h>
int main()
{
	double w = 3.0e-23;
	double k = 950;
	double x; 
	
	printf("请输入水的夸脱数：");
	scanf("%f",&x);
	
	printf("水分子的数量为:%e",x*k/w);  // %e是按指数的形式输出
	
	return 0;
}
