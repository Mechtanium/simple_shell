#include "main.h"

/**
 * prompt - prints $ prompt user to input
 * prints shell in interaactive mode
 */
void prompt(void)
{
	if((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;

	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}
