#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * main - 
 * @argc: 
 *
 * Description: 
 * Return: 
 */
int mainrock(int ac, char **av, char **env)
{
	int fd[2];

	if (pipe(fd) == -1)
		return (1);

	printf("%d, av1 = %s, %d\n", ac, av[0], fd[0]);
	return (EXIT_SUCCESS);
}
