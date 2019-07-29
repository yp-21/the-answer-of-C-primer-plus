#include<stdio.h> 
int main() 
{
	double yc,cm;
	
	printf("请输入身高（英尺）:\n");
	scanf("%lf", &yc);
	
	cm =  yc * 2.54;
	
	printf("相当于%.2lfcm\n",cm);
	
	return 0;
}
