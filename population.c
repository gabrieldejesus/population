#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int startSize;

    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);

    // TODO: Prompt for end size
    int endSize;

    do
    {
        endSize = get_int("End size: ");
    }
    while (endSize < startSize);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;

    // TODO: If the initial value is equal to the final value I finish the program
    if (startSize == endSize)
    {
        printf("Years: %i\n", years);
    }
    else
    {
        // TODO: Update the population until we reach the limit
        do
        {
            startSize = startSize + (startSize / 3) - (startSize / 4);
            years++;
        }
        while (startSize < endSize);

        // TODO: Print number of years
        printf("Years: %i\n", years);
    }
}