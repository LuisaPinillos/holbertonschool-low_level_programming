#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of arguments
 * @argv: matrix of arguments
 * Return: s
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
