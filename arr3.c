#include <stdio.h>
int main()
{
    int arr1[6]={1 ,2 , 3 , 4 ,5 ,6};
    int arr2[6];
    int i;
    for ( i = 0; i < 6 ; i++)
    {
       arr2[i]=arr1[i];

    }
    printf("Copied Arraay:\n");
    for(i=0 ; i < 6 ; i++)
    {
        printf("%d ", arr2[i]);

    }
           return 0 ;
}