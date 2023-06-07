#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    //Prompt user for text
    string text = get_string("Text: ");
    printf("%s\n", text);
}