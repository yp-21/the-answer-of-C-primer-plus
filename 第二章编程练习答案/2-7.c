#include<stdio.h>
int main()
{
	smile();
	return 0;
}

smile(){
	int i,j;
	for(i=3;i>0;i--){
		for(j=0;j<i;j++){
			printf("smile!");
		}
		printf("\n");
	}
}
