#include<stdio.h>
int main()
{
	jolly();
	deny();
	
	return 0;
}

jolly(void){
	int i;
	for(i = 0; i < 3; i=i+1){
		printf("For he is a jolly good fellow!\n");
	}
	
	return 0;
}

deny(void){
	printf("Which nobody can deny!");
	return 0;
}
