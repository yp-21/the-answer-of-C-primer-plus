#include<stdio.h>
int main()
{
	int x, y;
	printf("������һ�����֣�");
	scanf("%d",&x);
	
	for(y=0;y< 11; y++){
	    printf("%d ",x+y); //�ո�
		printf("%d\t",x+y);//�Ʊ�� 
		printf("%d\n ",x+y);//���з� 
	}
	
	return 0;
}
