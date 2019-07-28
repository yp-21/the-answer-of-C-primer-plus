#include<stdio.h>
int main() 
{
	printf("starting now:\n");
	one_three();
	printf("done!");
}

one_three(){
	printf("one\n");
	two();
	printf("three\n");
}
two(){
	printf("two\n");
}
