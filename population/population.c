#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start, end, years = 0;
    // TODO: Prompt for start size
    do
    {
        printf("Enter starting population size: ");
        scanf("%d", &start);
    }
    while (start < 9);

    // TODO: Prompt for end size

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
}
