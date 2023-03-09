#include <cs50.h>
#include <stdio.h>

int main(void)
{
int n;
do
{
    n=get_int("Positive Number: ");
}
while (n<1 && n);
for (int x = 1; x < n; x++)
{
    printf("#\n");
};
}