#include<stdio.h>
int main()
{
	smile();
}

smile(void){
	int i,j;
	for(i=3;i>0;i--){
		for(j=0;j<i;j++){
			printf("smile!");
		}
		printf("\n");
	}
}
