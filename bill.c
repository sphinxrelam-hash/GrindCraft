///WAP to collect useername and passward from user then display catalog to the consumer and ask his/her 
//choice for shoppig allow the consumer to buy a number of products from ctaalog and generate the bil that should show 
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    int id;
    char name[50];
    float price;
};

struct CartItem {
    struct Product product;
    int quantity;
};

struct user {
    char name[21];
} u; 


struct Product catalog[5] = {
    {1, "Classic T-Shirt", 499.00},
    {2, "Denim Jeans", 1299.00},
    {3, "Running Shoes", 2499.00},
    {4, "Leather Wallet", 799.00},
    {5, "Sunglasses", 1099.00}
};

struct CartItem cart[10];
int cart_item_count = 0;


void registerUser();
int login();
void displayCatalog();
void startShopping();
void generateBill(char* username);
int generateUniqueID();


int main() {
    int seed;
    srand((unsigned long)&seed);

    int choice; 
    
    while (1) {
        printf("\n---=== Welcome to Codder Baba's Store! ===---\n");
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            while(getchar() != '\n');
            printf("Invalid input. Please enter a number.\n");
            continue;
        }
        
        while(getchar() != '\n'); 

        switch (choice) {
            case 1:
                registerUser(); 
                break;
            case 2:
                if (login() == 1) { 
                    printf("\n-------------------------------------------------\n");
                    printf("Welcome, %s! Let's get shopping!\n", u.name); 
                    printf("-------------------------------------------------\n");
                    
                    displayCatalog(); 
                    startShopping();  
                    
                    if (cart_item_count > 0) {
                        generateBill(u.name); 
                    } else {
                        printf("No items in cart. No bill generated.\n");
                    }
                    cart_item_count = 0; 
                } else {
                    printf("\nLogin failed. Invalid username or password.\n");
                }
                break;
            case 3:
                printf("Goodbye!\n");
                exit(0); 
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0; 
}


void registerUser() {
    char userName[21], userPass[21];
    
    printf("Enter a new username (max 20 chars): ");
    fgets(userName, sizeof(userName), stdin);
    userName[strcspn(userName, "\n")] = 0; 

    printf("Enter a new password (max 20 chars): ");
    fgets(userPass, sizeof(userPass), stdin);
    userPass[strcspn(userPass, "\n")] = 0; 

    FILE *fp = fopen("users.csv", "a");
    if (!fp) { 
        printf("Error: Could not open user file for writing.\n");
        return; 
    }

    fprintf(fp, "%s,%s\n", userName, userPass);
    fclose(fp); 

    printf("Registration successful! You can now log in.\n");
}

int login() {
    char userName[21], userPass[21]; 
    char csvName[21], csvPass[21];   
    int isLoggedIn = 0; 

    printf("Enter your username: ");
    fgets(userName, sizeof(userName), stdin);
    userName[strcspn(userName, "\n")] = 0;

    printf("Enter your password: ");
    fgets(userPass, sizeof(userPass), stdin);
    userPass[strcspn(userPass, "\n")] = 0;

    FILE *fp = fopen("users.csv", "r");
    if (!fp) { 
        printf("No users found. Please register first.\n");
        return 0; 
    }

    while (fscanf(fp, "%20[^,],%20[^\n]\n", csvName, csvPass) == 2) {
        if (strcmp(userName, csvName) == 0 && strcmp(userPass, csvPass) == 0) {
            isLoggedIn = 1; 
            strcpy(u.name, csvName); 
            break; 
        }
    }

    fclose(fp); 
    return isLoggedIn; 
}

void displayCatalog() {
    printf("\n---=== Product Catalog ===---\n");
    printf("ID\t%-20s\tPrice\n", "Product Name");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\t%-20s\tRs.%.2f\n",
               catalog[i].id,
               catalog[i].name,
               catalog[i].price);
    }
    printf("-------------------------------------------------\n");
}

void startShopping() {
    int choice = 0; 

    while (1) { 
        printf("\n>> Enter Product ID to add (1-5), or 0 to checkout: ");
        
        if (scanf("%d", &choice) != 1) { 
            while(getchar() != '\n'); 
            printf("Invalid input. Please enter a number.\n");
            continue; 
        }

        if (choice == 0) {
            printf("Heading to checkout...\n");
            break; 
        }

        if (choice < 1 || choice > 5) {
            printf("Oops! That's not a valid ID. Please try again.\n");
            continue; 
        }

        if (cart_item_count >= 10) {
            printf("Oh no! Your cart is full (max 10 items). Please checkout.\n");
            break; 
        }

        int quantity = 0;
        int product_index = choice - 1; 

        printf("   How many '%s' would you like? ", catalog[product_index].name);
        if (scanf("%d", &quantity) != 1 || quantity <= 0) {
            while(getchar() != '\n'); 
            printf("Invalid quantity. Item not added.\n");
            continue; 
        }
         
        while(getchar() != '\n'); 

        cart[cart_item_count].product = catalog[product_index];
        cart[cart_item_count].quantity = quantity;
        
        cart_item_count++;

        printf("\nSuccessfully added %d x %s to your cart!\n",
               quantity,
               catalog[product_index].name);
    }
}


void generateBill(char* username) {
    float total_amount = 0.0;
    float item_total = 0.0;
    int billID = generateUniqueID(); 
    char filename[50]; 

   
    sprintf(filename, "bill_%d_%s.txt", billID, username);

    FILE *billFile = fopen(filename, "w");
    if (!billFile) {
        printf("Error: Could not create bill file!\n");
        return;
    }

    printf("\n\n---===  FINAL BILL  ===---\n");
    fprintf(billFile, "\n\n---===  FINAL BILL  ===---\n");

    printf("Bill ID: %d\n", billID);
    fprintf(billFile, "Bill ID: %d\n", billID);

    printf("User: %s\n", username);
    fprintf(billFile, "User: %s\n", username);

    printf("-------------------------------------------------------------\n");
    fprintf(billFile, "-------------------------------------------------------------\n");

    printf("%-20s\tPrice\t\tQty\tTotal\n", "Item");
    fprintf(billFile, "%-20s\tPrice\t\tQty\tTotal\n", "Item");

    printf("-------------------------------------------------------------\n");
    fprintf(billFile, "-------------------------------------------------------------\n");
    
    for (int i = 0; i < cart_item_count; i++) {
        item_total = cart[i].product.price * cart[i].quantity;

        printf("%-20s\tRs.%-7.2f\t%d\tRs.%.2f\n",
               cart[i].product.name,
               cart[i].product.price,
               cart[i].quantity,
               item_total);
        
        fprintf(billFile, "%-20s\tRs.%-7.2f\t%d\tRs.%.2f\n",
               cart[i].product.name,
               cart[i].product.price,
               cart[i].quantity,
               item_total);

        total_amount += item_total;
    }

   
    printf("-------------------------------------------------------------\n");
    fprintf(billFile, "-------------------------------------------------------------\n");

    printf("\t\t\t\tGRAND TOTAL: Rs.%.2f\n", total_amount);
    fprintf(billFile, "\t\t\t\tGRAND TOTAL: Rs.%.2f\n", total_amount);

    printf("-------------------------------------------------------------\n");
    fprintf(billFile, "-------------------------------------------------------------\n");
    
  
    fclose(billFile);

    printf("---=== Bill saved  ===---\n");
    printf("---=== Thank you for shopping with Codder Baba! ===---\n\n");
}

int generateUniqueID() {
    return (rand() % 90000) + 10000;
}