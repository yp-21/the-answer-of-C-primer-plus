#include<stdio.h>
#include <string.h>

int main()
{
	char xing[100];
	char ming[100];
	
	printf("请输入名：");
	scanf("%s",ming);
	printf("请输入姓："); 
	scanf("%s",xing);
	
	int ming_lenght = strlen(ming);
	int xing_lenght = strlen(xing);
	
	printf("名为\"%s\"\n",ming);
	printf("姓为\"%s\"\n",xing);
	
	printf("名为\"%20s\"\n",ming);
	printf("姓为\"%20s\"\n",xing);
	
	printf("名为\"%20s\"\n",ming);  //右对齐 
	printf("姓为\"%20s\"\n",xing);  
	
	printf("名为\"%-20s\"\n",ming);  //左对齐 
	printf("姓为\"%-20s\"\n",xing);
	
	printf("%*s,%*s", ming_lenght + 3, ming, xing_lenght + 3, xing);
	
	return 0;
}
