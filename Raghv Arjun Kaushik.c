
        else if (choice == 3) {
            printf("\n===== EVENT SUMMARY =====\n");
            for (i = 0; i < MAX_EVENTS; i++) {
                printf("%s - %d participant(s)\n", events[i], eventCount[i]);

                if (eventCount[i] > 0) {
                    for (j = 0; j < eventCount[i]; j++) {
                        printf("   -> %s\n", participants[i][j]);
                    }
                } else {
                    printf("   (No participants yet)\n");
                }
            }
        }

        
        else if (choice == 4) {
            printf("Thank you! Exiting the program...\n");
            break;
        }

        
        else {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}