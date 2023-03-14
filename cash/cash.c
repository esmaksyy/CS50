#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    do
    {
        calculate_cents=get_int("Enter cents here: ");
    }
    while (calculate_cents>=0);
    return 0;
}

int calculate_quarters(int cents)
{
    // TODO
    do
    {
        calculate_quarters=get_int("Enter cents here: ");
    }
    while (calculate_quarters>=0);
    return 0;
}

int calculate_dimes(int cents)
{
    // TODO
    do
    {
        calculate_dimes=get_int("Enter cents here: ");
    }
    while (calculate_dimes>=0);
    return 0;
}

int calculate_nickels(int cents)
{
    // TODO
    do
    {
        calculate_nickels=get_int("Enter cents here: ");
    }
    while (calculate_nickels>=0);
    return 0;
}

int calculate_pennies(int cents)
{
    // TODO
    do
    {
        calculate_pennies=get_int("Enter cents here: ");
    }
    while (calculate_pennies>=0);
    return 0;
}
