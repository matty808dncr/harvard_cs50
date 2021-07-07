#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    string enteredString = argv[1];
    
    for (int i = 0; i < strlen(enteredString); i++)
    {
        if (isdigit(enteredString[i]) == 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int key = atoi(enteredString);
    
    string plainText = get_string("plaintext: ");
        
    string cipherText = plainText;
        
    for (int i = 0; i < strlen(cipherText); i++)
    {
        if (isalpha(cipherText[i]))
        {
            if (islower(cipherText[i]))
            {
                cipherText[i] = (cipherText[i] - 'a' + key) % 26 + 'a';
            }
            else
            {
                cipherText[i] = (cipherText[i] - 'A' + key) % 26 + 'A';
            }
        }
    }
    printf("ciphertext: %s\n", cipherText);
    return 0;
}