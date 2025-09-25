#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the Character:");
    scanf("%c", &ch);

   if (ch >= 'A' && ch <= 'Z')  
    {
        ch = ch + 32;  
        printf("The lower case is: %c", ch);
    }

    if (ch >= 'a' && ch <= 'z')  
    {
        ch = ch - 32;  
        printf("The upper case is: %c", ch);
    }

    return 0;   
}