#include <stdio.h>
/**
 * main- its prints name received
 * @argc: size of argv array
 * @argv: an array of command listed
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{

	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
