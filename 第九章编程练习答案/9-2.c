#include <stdio.h>
void chline(char ch, int row, int col);
int main(void)
{
//	char ch;
//	double row,col;
//	scanf("%c%d%d",&ch,&row,&col);
//	chline(ch,row,col);
	
	chline('*' , 3, 4);
		
	return 0;
}

void chline(char ch, int row, int col)
{
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			putchar(ch);
		putchar('\n');
	}
	
	return;
}  
