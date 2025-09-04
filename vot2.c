#include <stdio.h>

int main() {
    int x = 0, y = 0, z = 0;
    int choice,userinput;
    printf("Enter:");
    scanf("%d",&userinput);
     
    while (userinput ==1) {
        printf("Choose an option:");
        printf("1 for A\n2 for B\n3 for C\n0 to Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                x++;
                break;
            case 2:
                y++;
                break;
            case 3:
                z++;
                break;
                
            default:
                printf("Invalid choice. Try again.\n");
        }
        
                printf("Final counts:\n");
                printf("Count of A: %d\n", x);
                printf("Count of B: %d\n", y);
                printf("Count of C: %d\n", z);
                return 0;
        printf("Current counts : A: %d, B: %d, C: %d\n", x, y, z);
    }
}