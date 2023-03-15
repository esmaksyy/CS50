#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers;
    int digits = 0;
    do
    {
        long numbers = get_long("Enter the credit card number here: ");
        for (numbers > 10)
        {
            numbers = numbers/10
            digits++
        }

    }
    while (digits != 13 || 15 || 16);



}