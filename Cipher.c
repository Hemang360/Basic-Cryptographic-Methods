#include <stdio.h>
#include <string.h>

int main() {
    char text[100], key[100];
    int choice, shift, len;
    printf("Enter the text: ");
    scanf("%s", text);
    len = strlen(text);
    printf("Choose an encryption method:\n");
    printf("1. Caesar Cipher\n");
    printf("2. XOR Cipher\n");
    printf("3. Atbash Cipher\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
     if (choice == 1) 
     {
        printf("Enter the shift value: ");
        scanf("%d", &shift);
        for (int i = 0; i < len; i++) 
        {
            if (text[i] >= 'a' && text[i] <= 'z') 
            {
                text[i] = (text[i] - 'a' + shift) % 26 + 'a';
            } else if (text[i] >= 'A' && text[i] <= 'Z') 
            {
                text[i] = (text[i] - 'A' + shift) % 26 + 'A';
            }
        }
    } 
    else if (choice == 2) 
    {
        printf("Enter the key: ");
        scanf("%s", key);
        for (int i = 0; i < len; i++) 
        {
            text[i] = text[i] ^ key[i];
        }
    } 
    else if (choice == 3) 
    {
        for (int i = 0; i < len; i++) 
        {
            if (text[i] >= 'a' && text[i] <= 'z') 
            {
                text[i] = 'z' - (text[i] - 'a');
            } 
            else if (text[i] >= 'A' && text[i] <= 'Z') 
            {
                text[i] = 'Z' - (text[i] - 'A');
            }
        }
    } 
    else 
    {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Ciphertext: %s\n", text);

    return 0;
}
