#include<stdio.h>
int main()
{
	double w = 3.0e-23;
	double k = 950;
	double x; 
	
	printf("������ˮ�Ŀ�������");
	scanf("%f",&x);
	
	printf("ˮ���ӵ�����Ϊ:%e",x*k/w);  // %e�ǰ�ָ������ʽ���
	
	return 0;
}
