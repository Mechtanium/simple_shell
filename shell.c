#include "main.h"

/**
 * interactive - 
 * @av: Variables
 * @env: Environment
 *
 * Description: Perform interactive mode workflow.
 * Return: void (Nothing)
 */
void interactive(char **env)
{
	int chid, i = 0, c, j;
	size_t n = 24;
	char *cmd = malloc(sizeof(char) * n);
	char **cmd_a = malloc(sizeof(char *) * n);

	(void) env;
	if (!cmd)
		/* Change this to error message */
		return;

	do {
		printf("$ ");
		c = getline(&cmd, &n, stdin);

		if (c == -1)
		{
			write(1, "Unable to read command input\n", 29);
			return;
		}

		_strcpy(&cmd, _strcln(cmd, c), c);

		if (_strcmp(cmd, "env"))
		{
			i = 0;
			while (env[i])
			{
				j = 0;
				while (env[i][j])
					j++;

				write(1, env[i], j);
				write(1, "\n", 1);
			}
		}
		else if (!_strcmp(cmd, "exit") && !_strcmp(cmd, ""))
		{
			chid = fork();

			if (chid == 0)
			{
				cmd = strtok(cmd, " ");

				i = 0;
				while ((void *) cmd)
				{
					cmd_a[i] = cmd;
					i++;
					cmd = strtok(NULL, " ");
				}

				c = execve(cmd_a[0], cmd_a, env);

				if (c == -1)
					write(1, "No such executable found\n", 24);
			}
			else
				wait(&chid);
		}
	}
	while (!_strcmp(cmd, "exit"));
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

