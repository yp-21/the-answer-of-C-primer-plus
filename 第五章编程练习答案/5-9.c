#include <stdio.h>
#include <stdlib.h>
 
void Temperatures(double tempature)
{
    const double a = 5.0 / 9.0, b = 32.0;
    const double k = 273.16;
    printf("%.2lf\n", tempature);
    printf("%.2lf\n", a * (tempature - b));
    printf("%.2lf\n", k + a* (tempature - b));
}
 
int main()
{
    double tempature;
    printf("�����¶�:");
    while(scanf("%lf", &tempature) == 1)
    {
        Temperatures(tempature);
        printf("���ٴ�����:");
    }
    return 0;
}
