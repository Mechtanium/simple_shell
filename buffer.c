#include "main.h"

/**
 * free_buffers - frees buffers
 * @buf: buffer to be free
 */
void free_buffers(char **buf)
{
	int i = 0;

	if (!buf || buf == NULL)
		return;
	while (buf[i])
	{
		free(buf[i]);
		i++;
	}
	free(buf);
}
