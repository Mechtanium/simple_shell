#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

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

/**
 * _putchar - writes the chararcter to stdout
 * @c: character to print
 * Return: 1 success, -1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
