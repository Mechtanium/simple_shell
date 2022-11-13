#include "main.h"

/**
 * interactive - Handles interactive mode
 * @av: Variables
 * @env: Environment
 *
 * Description: Perform interactive mode workflow.
 * Return: void (Nothing)
 */
void interactive(char **env)
{
	int c;
	size_t n = 1;
	char *cmd = malloc(sizeof(char) * n), *temp = malloc(sizeof(char) * n);
	char **cmd_a = malloc(sizeof(char *) * n);

	do {
		free(cmd);
		free(cmd_a);
		n = 24;
		cmd = malloc(sizeof(char) * n);
		temp = malloc(sizeof(char) * n);
		cmd_a = malloc(sizeof(char *) * n);
		c = 0;

		if (!cmd || !cmd_a)
		{
			write(2, "Out of memory exception\n", 24);
			return;
		}

		write(1, "$ ", 2);
		c = getline(&cmd, &n, stdin);
		if (c == -1)
			return;
		_strcln(&cmd);
		if (_strcmp(cmd, "env"))
		{
			builtin_env(env);
		}
		else if (!_strcmp(cmd, "exit") && !_strcmp(cmd, ""))
		{
			_exec(cmd, temp, cmd_a, n, c, env);
		}
	} while (!_strcmp(cmd, "exit"));
}

/**
 * non_interactive - use command line supplied arguments.
 *
 * Description: Use command line pipe and arguments.
 * Return: void (Nothing)
 */
void non_interactive(char **env)
{
	printf("non-interactive, %s", *env);
}
