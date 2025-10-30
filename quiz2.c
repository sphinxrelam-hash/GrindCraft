#include <stdio.h>

int main() {
    int i, n, dig, sum, product, temp;

    printf("Enter the range : ");
    int start, end;
    scanf("%d %d", &start, &end);

    printf("Numbers whose digit sum = digit product are:\n");

    for (i = start; i <= end; i++) {
        temp = i;
        sum = 0;
        product = 1;

        while (temp > 0) {
            dig = temp % 10;       
            sum = sum + dig;       
            product = product * dig; 
            temp = temp / 10;        
        }

        if (sum == product)
            printf("%d\n", i);
    }

    return 0;
}
