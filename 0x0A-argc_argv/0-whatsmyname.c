#include <stdio.h>
/**
 * main - Entry
 * @argc: size of argv array
 * @argv: array of size argc
 * Return: Always 0 Sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; 1++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
