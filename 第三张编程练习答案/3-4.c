#include<stdio.h>
int main()
{
	float a;
	printf("�����븡������");
	scanf("%f",&a);
	
	printf("С������ʽ��%f\n",a);
	printf("ָ����ʽ��%e\n",a);
	printf("ʮ��������ʽ��%a\n",a);  // ��a ��������ʮ���������ֺ�p-��������C99��
			
	return 0; 
}
