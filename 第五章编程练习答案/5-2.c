#include<stdio.h>
int main()
{
	int x, y;
	printf("请输入一个数字：");
	scanf("%d",&x);
	
	for(y=0;y< 11; y++){
	    printf("%d ",x+y); //空格
		printf("%d\t",x+y);//制表符 
		printf("%d\n ",x+y);//换行符 
	}
	
	return 0;
}
