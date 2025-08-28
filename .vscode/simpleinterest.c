#include <stdio.h>
int main(){
    int P;
    printf("Enter Principal Amount :");
    scanf("%d", &P);

    int T;
    printf("Enter Time:");
    scanf("%d", &T);

    int R=8;
    int SI= P*R*T/100;

    printf("The Simple Interest is:%d", SI);

    return 0;
}