#include<stdio.h>
int main() 
{
	const int a = 60;
	int hours,minutes,s,fen;
	printf("������һ��ʱ��(����)��");
	scanf("%d",&minutes);
	
	while(minutes > 0){
		hours = minutes / a;
		fen = minutes % a;
		printf("%d���ӵ���%dСʱ%d����\n",minutes,hours,fen);
		printf("������һ��ʱ��(����)(0 to quit): ");
		
		scanf("%d",&minutes);
	};
	
	return 0;
	
}
