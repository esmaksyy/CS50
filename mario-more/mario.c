#include <cs50.h>
#include <stdio.h>

int main(void)
{int n;
do{
    n=get_int("Positive Number: ");
}
while (n<1 || n>8);
for (int x = 0; x < n; x++)
{
    for (int i = 0; i<n-1-x; i++)
    {
        printf(" ");
    };
    for (int e =0; e<x+1; e++)
    {
        if (e == x)
        {
            printf("#\n");
        }
        else
        {
            printf("#");};
    };
    for (int u = 0; u<)
};
}