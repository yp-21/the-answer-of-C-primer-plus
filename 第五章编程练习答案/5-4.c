#include<stdio.h>
int main()
{
	int height;
	
	printf("���������cm��");
	scanf("%d",&height); 
	
	while(height>0){
		printf("���Ϊ%dcm,��%.3lfӢ��\n",height,height*0.0328084);
		printf("Enter a height in centimeters (<=0 to quit):");
		scanf("%d",&height); 
	} 
	
	return 0;
}
