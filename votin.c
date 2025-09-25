#include <stdio.h>
int main()
{ int x = 0 , y = 0 , z =0;
printf("1 for A\n2 for B\n3 for c\n");
int choice;
printf("Enter choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
   x= x+1;
break;
case 2:
   y= y+1;
break;
   z= z+1;
break;
}
   if (x > y && x > z) {
        printf("Winner is: A with %d votes", x);
    }
    else if (y > x && y > z) {
        printf("Winner is: B with %d votes", y);
    }
    else if (z > x && z > y) {
        printf("Winner is: C with %d votes", z);
    }
    else {
        printf("It's a tie!!!");
    }
return 0;
}