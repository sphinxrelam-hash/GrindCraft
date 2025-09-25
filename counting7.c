#include <stdio.h>
int main(){
    float i ,sum =0 ;
    
    for (i = 1; i <= 7; i++) {  
        sum = sum + 1 / i;
    }

    printf("%f", sum);

    return 0;

}