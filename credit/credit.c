#include <cs50.h>
#include <stdio.h>

bool check_sum(long num);

int main(void)
{
    int digits = 0, single_digit =0, two_digit =0;
    long numbers = get_long("Enter the credit card number here: ");
    check_sum(numbers);
    while(numbers > 0)
    {
        if (numbers < 10)
        {
            single_digit = numbers;
        }
        if {numbers > 10 && numbers < 100}
        {
            two_digit = numbers;
        }
        numbers /= 10;
        digits ++;
    }
    printf("digits: %i\n", digits);
    printf("single_digit: %i\n", single_digit);
    printf("two_digit: %i\n", two_digit);
}

bool check_sum(long num)
{
    int total = 0, buffer = 0;
    bool var = true;
    while(num > 0)
    {
        if (var == true)
        {
            total += num % 10;
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
            num /= 10;
        }
    }
    printf("total: %i\n", total);
    if (total % 10 == 0)
        return true;
    printf("INVALID\n");
    return false;
}