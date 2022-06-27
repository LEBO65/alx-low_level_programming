#include <stdio.h>
/**
 * main -> its prints a name
 * @argc: size  of argv array
 * @argv: an array of command listed
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		argv[i] = argv[i];
	}
	printf("%d\n", (i - 1));
	printf("%d\n", argc - 1);
	return (0);
}
