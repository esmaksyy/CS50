#include <cs50.h>
#include <stdio.h>

int main(void)
{
int n;
do
{
    n=get_int("Positive Number: ");
}
while (n<1 || n>8);

for (int x = 0; x < n+1; x++)
{
    for (int i = 0; i<n-x+1; i++)
    {
        printf(" ");
    };
    for (int e =0; e<x; e++)
    {
        if (e == x-1 )
        {
            printf("#\n");
        }
        else
        {
            printf("#");
        };
    };
};
};
