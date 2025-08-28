#include <stdio.h>
int main(){
    float i ,sum =0 ;
    for ( i = 0; i <= 7; i++)
    {
        sum = sum +1.0/i;

    }
    

    printf("%f", sum);

    return 0;

}