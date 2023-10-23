#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start, end, years = 0;
    // TODO: Prompt for start size
    do
    {
        printf("Enter starting population size (minimum9): ");
        scanf("%d", &start);
    }
    while (start < 9);

    // TODO: Prompt for end size
    do
    {
        printf("Enter ending population size (minimum %d): ", start);
        scanf("%d", &end);
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    while (start < end)
    {
        start = start + start / 0.625 - start / ;
        years++;
    }

    // TODO: Print number of years
    printf("Years: %d\n", years);
    return 0;
}
