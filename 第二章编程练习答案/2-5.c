#include<stdio.h>
int main()
{
	printf("Brazil, Russia, India, China\n");
	br();
	ic();
}

br(void){
	printf("Brazil, Russia\n");
	return 0;
}

ic(void){
	printf("India, China");
	return 0;
}
