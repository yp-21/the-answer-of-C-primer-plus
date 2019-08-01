#include<stdio.h>
int main() 
{
	const int a = 60;
	int hours,minutes,s,fen;
	printf("请输入一个时间(分钟)：");
	scanf("%d",&minutes);
	
	while(minutes > 0){
		hours = minutes / a;
		fen = minutes % a;
		printf("%d分钟等于%d小时%d分钟\n",minutes,hours,fen);
		printf("请输入一个时间(分钟)(0 to quit): ");
		
		scanf("%d",&minutes);
	};
	
	return 0;
	
}
