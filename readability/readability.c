#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    //Prompt user for text
    string text = get_string("Text: ");
    printf("%s\n", text);

    //Count the number of letters there are in the text
    int letters = 0;
    for(int i = 0; i < strlen(text); i++)
    {
        if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        letters++;
    }
    printf("%i letters\n", letters);

    //Count the number of words
    int words = 1;
    for(int i = 0; i < strlen(text); i++)
    {
        if(text[i] == ' ')
        words++;
    }
    printf("%i words\n", words);

    //Count the number of sentences
    int sentences = 0;
    for(int i = 0; i < strlen(text); i++)
    {
        if(text[i] == '.' || text[i] == '!' || text[i] == '?')
        sentences++;
    }
    printf("%i sentences\n", sentences);

    //Use Coleman-Liau index to determine the reading grade level
    float calculation = (0.0588 * letters / words * 100) - (0.296 * sentences / words * 100)
}