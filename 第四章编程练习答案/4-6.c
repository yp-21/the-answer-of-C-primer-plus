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

	int xl = strlen(xing);
	int ml = strlen(ming);
	
	printf("%s %s\n",xing,ming);
	printf("%*d %*d",xl,xl,ml,ml);
	
	return 0;
}
