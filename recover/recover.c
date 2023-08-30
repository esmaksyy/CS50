#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Check that the argument count is 2
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    // Open file for reading
    FILE *input_file = fopen(argv[1], "r");

    // Check that the input_file is valid

}