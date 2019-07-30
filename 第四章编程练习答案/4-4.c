#include<stdio.h>
int main()
{
	float heigh;
	char name[50];
	
	printf("请输入身高：");
	scanf("%f",&heigh);
	
	printf("请输入姓名：");
	scanf("%s",name);
	
	printf("%s,you are %.0fcm feet all\n",name,heigh);
	
	return 0; 
}
