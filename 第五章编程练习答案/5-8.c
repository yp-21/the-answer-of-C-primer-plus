#include<stdio.h> 
int main()
{	
	int x,y;
	
	printf("请输入一个数：");
	scanf("%d",&x);
		
	printf("请输入一个数：");
	scanf("%d",&y);

	while(y>0){
		printf("%d %% %d is %d\n",y,x,y%x);
		printf("请输入一个数 (<= 0 to quit): ");
		scanf("%d",&y);
	}
	
	return 0;
	
}
