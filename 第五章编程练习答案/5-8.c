#include<stdio.h> 
int main()
{	
	int x,y;
	
	printf("������һ������");
	scanf("%d",&x);
		
	printf("������һ������");
	scanf("%d",&y);

	while(y>0){
		printf("%d %% %d is %d\n",y,x,y%x);
		printf("������һ���� (<= 0 to quit): ");
		scanf("%d",&y);
	}
	
	return 0;
	
}
