#include<stdio.h> 
void show(double x);

int main()
{
	double x;
	printf("请输入一个数：");
	scanf("%lf",&x);
	show(x);
	
	return 0;
}

void show(double x){
	printf("x的立方为：%lf\n",x*x*x);
	printf("x的立方为：%e\n",x*x*x); //科学计数法 

}
