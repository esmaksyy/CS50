#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Comb through each row
    for (int i = 0; i < height; i++)
    {
        // Comb through each column
        for (int j = 0; j < width; j++)
        {
            // Convert pixels to float
            float Red = image[i][j].rgbtRed;
            float Green = image[i][j].rgbtGreen;
            float Blue = image[i][j].rgbtBlue;

            // Find the average value
            int average = round((Red + Green + Blue) / 3);
            image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // Comb through each row
    for (int i = 0; i < height; i++)
    {
        // Comb through each column
        for (int j = 0; j < width; j++)
        {
            // Convert pixels to float
            float orijinalRed = image[i][j].rgbtRed;
            float orijinalGreen = image[i][j].rgbtGreen;
            float orijinalBlue = image[i][j].rgbtBlue;

            // Find the updated pixel value
            int sepiaRed = round(0.393 * orijinalRed + 0.769 * orijinalGreen + 0.189 * orijinalBlue);
            int sepiaGreen = round(0.349 * orijinalRed + 0.686 * orijinalGreen + 0.168 * orijinalBlue);
            int sepiaBlue = round(0.272 * orijinalRed + 0.534 * orijinalGreen + 0.131 * orijinalBlue);

            // Update the pixel value if sepiaRed, sepiaGreen or sepiaBlue exceeds 255
            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }
            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }

            // Update final pixel values
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
