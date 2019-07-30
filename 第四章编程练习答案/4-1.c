#include<stdio.h>
int main()
{
	char xing[100];
	char ming[100];
	
	printf("请输入名：");
	scanf("%s",ming);
	printf("请输入姓："); 
	scanf("%s",xing);
	
	printf("姓名为：%s,%s",xing,ming);
	
	return 0;
}
