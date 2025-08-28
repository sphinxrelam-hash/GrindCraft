#include <stdio.h>
int mian()
{ int x , y , z =0;
printf("1 for A\n 2 for B");
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
if (x>y)
{
    printf("Winner %d", x);
}
if (y>x)
{
   printf("Winner %d", y);
}
if (x>z)
{
   printf("Winner %d", x);
}
if (y>z)
{
   printf("Winner %d", z);
}
}