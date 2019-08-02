#include<stdio.h>
int main()
{
	int day,weeks,d;
	printf("请输入天数：");
	scanf("%d",&day);
	
	while(day>0){
		weeks = day/7;
		d = day%7;
		printf("%d天等于%d周%d天\n",day,weeks,d);
		scanf("%d",&day);
	}

	
	return 0;
	
}
