 
#include<stdio.h>
int main(void)
{
	 double a;
	 printf("Please input a double:");
	 scanf("%lf",&a);
	 printf("a.The input is %.1lf or %.1e\n",a,a);
	 printf("b.The input is %+.3lf or %.3E\n",a,a);
	 return(0);
}
