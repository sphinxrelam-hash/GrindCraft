#include <stdio.h>
int main()
{
    int  i ,  sum = 0 ;
    printf("Enter Nmubers:");
  
    int arr[8];
    for ( i = 0; i < 8 ;  i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of the array:%d ", sum);

    return 0 ;



}