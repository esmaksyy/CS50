#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //Check that there is one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./substitution key \n");
        return 1;
    }

    //Validate that the key consists only of alphabets
    string key = argv[1];
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isalpha(key[i]))
        {
            printf ("Usage: ./substitution key\n");
            return 1;
        }
    }

    //Validate that the key consists of 26 characters
    if (strlen(key) != 26)
    {
        printf ("Key must contain 26 characters.\n");
        return 1;
    }
}