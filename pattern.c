#include <stdio.h>
    int main()
{
    int i,j,s;

    for(i=0;i<=4;i++)
    {
        for(s=0;s<i;s++)
        {
            printf("   ");
        }
        for(j=1;j<=4-i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}