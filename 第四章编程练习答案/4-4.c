#include<stdio.h>
int main()
{
	float heigh;
	char name[50];
	
	printf("��������ߣ�");
	scanf("%f",&heigh);
	
	printf("������������");
	scanf("%s",name);
	
	printf("%s,you are %.0fcm feet all\n",name,heigh);
	
	return 0; 
}
