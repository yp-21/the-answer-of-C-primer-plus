#include<stdio.h>
double min(double x,double y);
int main()
{
	double x,y;
	printf("enter tow numbers(q to quit):");
	while(scanf("%lf %lf",&x,&y) == 2)
	{
		printf("the samller number is %f.\n",min(x,y));
		printf("Again input(q to quit):");
	}
	printf("Bye!\n");
	
	return 0;
}

double min(double a,double b)
{
	return a < b ? a : b;
}
