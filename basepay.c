#include <stdio.h>
int main(){
    int bp;
    printf("Enter Base Pay:");
    scanf("%d", &bp);

    int hra= bp*30/100;
    int DA= bp*20/100;
    int IT= bp*10/100;
    
    int GS= bp+hra+DA+7000;
    int NS=GS-IT-14000;
    
    printf("Net Salary:%d\n" , NS);
    printf("Gross Salary: %d\n", GS);

    return 0;
}