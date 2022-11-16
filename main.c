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
	int s, ch, t = 0;
	char **arr;

	(void) ac;
	(void) av;

	ch = fork();

	if (ch == 0)
	{
		arr = malloc(sizeof(char *));
		_strcpy(arr[0], "./test", 8);
		s = execve(arr[0], arr, &t);
	}
	else
	{
		wait(&t);
/*get response child prpcess*/
	if (isatty(1) == 1)
		interactive(env);
	else
		non_interactive(env);
	}
	return (EXIT_SUCCESS);
}

