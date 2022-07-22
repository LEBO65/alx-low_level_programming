#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 1 if little, 0 if big
 */

int main(void)
{
    int n;

    n = get_endianness();
    if (n != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
