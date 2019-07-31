#include<stdio.h>
int main()
{
	float v,total,time;
	printf("请输入下载速度:");
	scanf("%f",&v);
	printf("请输入文件大小:");
	scanf("%f",&total);
	
	time = total/v;
	
	printf("下载速度%.2fMb/s，文件大小%.2fMB，需要时间%.2fs",v,total,time);
	
	return 0;
} 
