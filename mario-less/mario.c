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
for (int x = 0; x < n; x++)
{
   for (int i=0; i<x; i++)
   {printf("#\n");}
};