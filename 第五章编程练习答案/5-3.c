#include<stdio.h>
int main()
{
	int day,weeks,d;
	printf("������������");
	scanf("%d",&day);
	
	while(day>0){
		weeks = day/7;
		d = day%7;
		printf("%d�����%d��%d��\n",day,weeks,d);
		scanf("%d",&day);
	}

	
	return 0;
	
}
