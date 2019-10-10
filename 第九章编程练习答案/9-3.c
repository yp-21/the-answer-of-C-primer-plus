#include <stdio.h>
void func(char z,int x,int y); 
int main(void)
{
	char ch;
	int col,row;   //col为列数，i为行数 
	printf("please input a ch and tow number:(q to quit):\n");
	while(scanf("%c%d%d",&ch,&col,&row)  == 3){
		func(ch,col,row);
		printf("again input(q to quit):");
	}
	printf("bye!\n");
	return 0;
}

void func(char z,int x,int y)
{
	int row,col;
	for(row=0;row<y;row++){
		for(col=0;col<x;col++)
			putchar(z);
		putchar('\n');
	}
}
