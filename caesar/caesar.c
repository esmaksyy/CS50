#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //Check that there is one command-line argument
    if (argc !=2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    //Define the key
    string key = argv[1];

    //Check that the input is a digit
    for (int i = 0; i < strlen (argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    printf("Success\n%s\n", key);

    //Get plaintext from user
    string plaintext = get_string("plaintext: ");

    //Convert key to integer
    int k = atoi(key);
    printf("ciphertext: ");

    //Obtain ciphertext
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            printf()
        }
    }
}