#include <stdio.h>
int main()
{
    char c = 'A';
    int i, j;
    int n = 6;
    for( j = 0; j < n; j++)
    {
        for( i = 0; i <= j; i++)
        {
            printf("%c",c);
            c += 1;
        }
        printf("\n");
    }
    return 0;
}

