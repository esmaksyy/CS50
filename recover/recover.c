#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
typedef uint8_t BYTE;

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
    if (input_file == NULL)
    {
        printf("Could not open file\n");
        return 2;
    }

    // Store blocks of 512 bytes in an array
    unsigned char buffer[512];

    // Track number of images generated
    int count_image = 0;

    // File pointer for recovered images
    FILE *output_file = NULL;

    // char filename[8]
    char *filename = malloc(8 * sizeof(char));

    // Read the blocks of 512 bytes
    while (fread(buffer, sizeof(char), 512, input_file))
    {
        // Check if bytes indicate start of JPEG
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // Close the previous output_file, if open
            if (output_file != NULL)
            {
                fclose(output_file);
            }
            // Write the JPEG filenames
            sprintf(filename, "%03i.jpg", count_image);

            // Open output_file for writing
            output_file = fopen(filename, "a");

            // Count number of images found
            count_image++;
        }
        // Check if output has been used for valid input
        if (output_file != NULL)
        {
            fwrite(buffer, sizeof(char), 512, output_file);
        }
    }

    // Close the last output_file, if open
    if (output_file != NULL)
    {
        fclose(output_file);
    }

    free(filename);
    fclose(input_file);

    return 0;
}