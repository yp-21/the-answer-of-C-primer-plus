#include<stdio.h>
#include <string.h>

int main()
{
	char xing[100];
	char ming[100];
	
	printf("����������");
	scanf("%s",ming);
	printf("�������գ�"); 
	scanf("%s",xing);
	
	int ming_lenght = strlen(ming);
	int xing_lenght = strlen(xing);
	
	printf("��Ϊ\"%s\"\n",ming);
	printf("��Ϊ\"%s\"\n",xing);
	
	printf("��Ϊ\"%20s\"\n",ming);
	printf("��Ϊ\"%20s\"\n",xing);
	
	printf("��Ϊ\"%20s\"\n",ming);  //�Ҷ��� 
	printf("��Ϊ\"%20s\"\n",xing);  
	
	printf("��Ϊ\"%-20s\"\n",ming);  //����� 
	printf("��Ϊ\"%-20s\"\n",xing);
	
	printf("%*s,%*s", ming_lenght + 3, ming, xing_lenght + 3, xing);
	
	return 0;
}
