// Project Done by Raghav Vij, Priyanshu, Raghav Arjun Kaushik, Kush Garg

#include <stdio.h>

int main() {
    int cost = 0, users, ticketType, userChoice;
    int totalCost = 0, totalUsers = 0, discount = 0;

    printf("***** Welcome to Ticket Booking System *****\n");
    printf("Price for seats: \n");
    printf("1. Premium Seat  -> Rs 200 \n");
    printf("2. Standard Seat -> Rs 150 \n");
    printf("3. Economy Seat  -> Rs 100 \n");

    do {
        printf("\nEnter the type of ticket you want (1=Premium, 2=Standard, 3=Economy): ");
        scanf("%d", &ticketType);

        switch (ticketType) {
            case 1:
                printf("Enter the number of Premium seats: ");
                scanf("%d", &users);
                cost = users * 200;
                totalUsers += users;
                totalCost += cost;
                printf("Cost for this booking: Rs %d\n", cost);
                break;

            case 2:
                printf("Enter the number of Standard seats: ");
                scanf("%d", &users);
                cost = users * 150;
                totalUsers += users;
                totalCost += cost;
                printf("Cost for this booking: Rs %d\n", cost);
                break;

            case 3:
                printf("Enter the number of Economy seats: ");
                scanf("%d", &users);
                cost = users * 100;
                totalUsers += users;
                totalCost += cost;
                printf("Cost for this booking: Rs %d\n", cost);
                break;

            default:
                printf("Invalid ticket type! Please enter 1, 2 or 3.\n");
        }

        printf("\nEnter 0 to stop booking or any other number to continue: ");
        scanf("%d", &userChoice);

    } while (userChoice != 0);

    printf("\n***** Booking Summary *****\n");
    printf("Total Seats Booked: %d\n", totalUsers);
    printf("Total Bill (before discount): Rs %d\n", totalCost);

    if (totalUsers >= 5) {
        discount = totalCost * 5 / 100;
        totalCost -= discount;
        printf("Discount Applied (5%%): Rs %d\n", discount);
    } else {
        printf("No discount applied (book 5 or more seats to get 5%% off).\n");
    }

    printf("Final Bill: Rs %d\n", totalCost);
    printf("***************************************\n");

    return 0;
}
