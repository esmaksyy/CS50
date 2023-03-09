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
if (n==1)
{
    for (int x = 0; x < n; x++)
    {
        printf("#\n");
    };
};
if (n==2)
{
    for (int x = 0; x < n; x++)
    {
        printf("#\n");
        printf("##\n");
    };
};
if (n==3)
{
    for (int x = 0; x < n; x++)
    {
        printf("#\n");
        
    }
}