#include <stdio.h>
int main()
{  int A , B , C , D = 0;
   
    
    printf("Enter frist number:");
    scanf("%d",&A);
    
    
    printf("Enter frist number:");
    scanf("%d",&B);
    
    
    printf("Enter frist number:");
    scanf("%d",&C);
    
    
    printf("Enter frist number:");
    scanf("%d",&D);

  if (A > B && A > C && A > D)
  {
      printf("The greatest number is: %d", A);
  }
  else if (B > A && B > C && B > D)
  {
    printf("The greatest number is: %d", B);
  }
  else if (C> A && C > B && C > D)
  {
    printf("The greatest number is: %d", C);
  }
  else{
    printf("The greatest number is: %d", D);
  }

    return 0;
}