#include<stdio.h>
int main()
{
	float v,total,time;
	printf("�����������ٶ�:");
	scanf("%f",&v);
	printf("�������ļ���С:");
	scanf("%f",&total);
	
	time = total/v;
	
	printf("�����ٶ�%.2fMb/s���ļ���С%.2fMB����Ҫʱ��%.2fs",v,total,time);
	
	return 0;
} 
