#include "main.h"
/**
 * _strspn - gets the legth of a prefix substring
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	a = 0;
	c = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			b++;
		}
		if (accept[b] == '\0')
			break;
		a++;
	}
	return (c);
}
