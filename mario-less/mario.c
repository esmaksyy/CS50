#include <cs50.h>
#include <stdio.h>

int main(void)
{
int n;
do
{
    n=get_int("Positive Number: ");
}
while (n>0 && n<9);
for (int n = 1; n < 9; n++)
{
    printf("#\n");
};
}