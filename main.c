#include "main.h"

/**
 * main - runs shell commands
 * @ac: int number of variables
 * @av: Two dimensional array of command line arguments
 * @env: Enviroment variable.
 *
 * Description: Behaves just like a shell.
 * Return: 0 for success or anything else otherwise.
 */
int main(int ac, char **av, char **env)
{
	(void) ac;
	(void) av;
	if (isatty(1) == 1)
		interactive(env);
	else
		non_interactive(env);

	return (EXIT_SUCCESS);
}

