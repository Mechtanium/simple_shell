#include "main.h"

/**
 * interactive - command entered by user
 * @cmd: command entered
 * @cmd1: array of pointer to commands
 */
void interactive(char *cmd, char **cmd1)
{
	pid_t child_pid;
	int status;
	char **env = environ;

	child_pid = fork();
	if (child_pid < 0)
		perror(cmd);
	if (child_pid == 0)
	{
		execve(cmd, cmd1, env);
		perror(cmd);
		free(cmd);
		free_buff(cmd1);
		exit(98);
	}
	else
		wait(&status);
}
