#include <stdio.h>

int main()
{ 
  int x ,y , i;
  printf("enter the number");
  scanf("%d",& x);
  scanf("%d",&y);
  printf("prime number are");
  for( int i= x;i<=y;i++)
  {
      if(i%2==1)
       printf("prime number are: %d\n", i);
  
  }
    return 0;
}