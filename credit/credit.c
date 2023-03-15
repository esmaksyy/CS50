#include <cs50.h>
#include <stdio.h>

bool check_sum(long num);

int main(void)
{
    long numbers = get_long("Enter the credit card number here: ");
    check_sum(numbers);
}

bool check_sum(long num)
{
    int total = 0, buffer = 0;
    bool var = true;
    while()
    {
        if (var == true)
        {
            total = num % 10;
            num /= 10;
            var = false;
        }
        else
        {
            buffer = num % 10;
            buffer *= 2;
            if (buffer > 10)
            {
                total += buffer %10;
                total += buffer /10;
            }
            else
            {
                total += buffer;
            }
            var = true;
        }
    }
}