#include "main.h"
/**
 * *_memcpy - copies n bytes  from memory area src to memory area dest
 * @dest:destination char
 * @src: source char
 * @n: number of bytes to be copied
 * Return:pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int s;

	for (s = 0; s < n; s++)
	{
		dest[s] = src[s];
	}
	return (dest);
}
