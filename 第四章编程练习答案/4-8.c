#include<stdio.h>

int main()
{
	const double a = 3.785;
	const double b = 1.609;
	double lc,qyl,hyl;
		
	printf("���������е����(Ӣ��)��");
	scanf("%lf",&lc); 
	printf("���������ĵ�������(����)��");
	scanf("%lf",&qyl); 
	
	printf("ÿ����������ʻ��Ӣ������Ӣ��/���أ���%.1lf\n",lc/qyl);
	printf("ÿ����������ʻ��Ӣ��������/100�����%.5lf", (qyl*a) / (lc*b*100));
	
	return 0;
}
