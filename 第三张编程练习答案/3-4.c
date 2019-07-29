#include<stdio.h>
int main()
{
	float a;
	printf("请输入浮点数：");
	scanf("%f",&a);
	
	printf("小数点形式：%f\n",a);
	printf("指数形式：%e\n",a);
	printf("十六进制形式：%a\n",a);  // ％a 浮点数、十六进制数字和p-记数法（C99）
			
	return 0; 
}
