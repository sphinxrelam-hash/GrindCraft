#include <stdio.h>

int main() {
    int NC, bill = 0;
    printf("Enter The Number of Calls: ");
    scanf("%d", &NC);

    if (NC > 600) {
        bill = (50 * 1) + (100 * 2) + (100 * 4) + (200 * 6) + (NC - 600) * 6;
    }
    if (NC <= 600 && NC > 400) {
        bill = (50 * 1) + (100 * 2) + (100 * 4) + (NC - 400) * 6;
    }
    if (NC <= 400 && NC > 300) {
        bill = (50 * 1) + (100 * 2) + (NC - 300) * 4;
    }
    if (NC <= 300 && NC > 200) {
        bill = (50 * 1) + (NC - 200) * 2;
    }
    if (NC <= 200 && NC > 125) {
        bill = (50 * 1);
    }
    if (NC <= 125 && NC > 75) {
        bill = (NC - 75) * 1;
    }
    if (NC <= 75) {
        bill = 0;
    }

    printf("Your bill is: %d\n", bill);
    return 0;
}

