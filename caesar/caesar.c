#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //Check that there is one command-line argument
    if (argc !=2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else printf("Success!\n");

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

}