#include<stdio.h>
int main()
{
	double bei;
	printf("请输入杯数:");
	scanf("%lf",&bei);
	
	printf("%lf杯等于%lf品脱.\n",bei,bei/2);
	printf("%lf杯等于%lf盎司.\n",bei,bei*8);
	printf("%lf杯等于%lf大汤勺.\n",bei,bei*8*2);
	printf("%lf杯等于%lf茶勺.\n",bei,bei*8*2*3);
}
