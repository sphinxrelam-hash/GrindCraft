#include <stdio.h>
    int main()
{
    int x,y;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);

    if(x%2==0)
    {
        printf(" %d is even and square is %d\n",x,x*x);
    }


    else 
    {
        printf(" %d is odd and cube is %d\n",x,x*x*x);
    }

    if(y%2==0)
    {
        printf(" %d is even and square is %d\n",y,y*y);
    }
    
    else 
    {
        printf(" %d is odd and cube is %d\n",y,y*y*y);
    }

    return 0;
}