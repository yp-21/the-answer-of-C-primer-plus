#include<stdio.h> 
void show(double x);

int main()
{
	double x;
	printf("������һ������");
	scanf("%lf",&x);
	show(x);
	
	return 0;
}

void show(double x){
	printf("x������Ϊ��%lf\n",x*x*x);
	printf("x������Ϊ��%e\n",x*x*x); //��ѧ������ 

}
