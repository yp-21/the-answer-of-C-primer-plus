#include <stdio.h>
int main(void)
{
	int count, sum;
	int n;
	
	printf("������һ��ֵ: ");
	scanf("%d", &n);
	
	count = 0;
	sum = 0;
	while(count++ < n)
	sum = sum + count;
	printf("sum = %d\n", sum);
	return 0;
}
