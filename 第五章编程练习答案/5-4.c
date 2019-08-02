#include<stdio.h>
int main()
{
	int height;
	
	printf("请输入身高cm：");
	scanf("%d",&height); 
	
	while(height>0){
		printf("身高为%dcm,合%.3lf英尺\n",height,height*0.0328084);
		printf("Enter a height in centimeters (<=0 to quit):");
		scanf("%d",&height); 
	} 
	
	return 0;
}
