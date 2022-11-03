#include <stdlib.h>
#include <stdio.h>

/**
 * main - runs shell commands
 * @argc: int number of variables
 * @argv: Two dimensional array of command line arguments
 *
 * Description: Behaves just like a shell.
 * Return: 0 for success or anything else otherwise.
 */
int main(int argc, char **argv)
{
	printf("%c\n", argc + argv[0][0]);

	return (EXIT_SUCCESS);
}
