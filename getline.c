#include "main.h"

/**
 * _realloc - Reallocates memory block
 * @ptr: pointer to the previous memory allocated
 * @o_size: size in bytes of allocated space for ptr
 * @n_size: size in bytes for new memory block
 * Return: ptr if n_size == o_size, NULL if n_size == 0
 * otherwise a pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int o_size, unsigned int n_size)
{
	void *memory;
	char *ptr_cpy, *fill;
	unsigned int i;

	if (n_size == o_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(n_size);
		if (memory == NULL)
			return (NULL);
		return (memory);
	}

	if (n_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_cpy = ptr;
	memory = malloc(sizeof(*ptr_cpy) *n_size);
	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	fill = memory;

	for (i = 0; i < o_size && i < n_size; i++)
		fill[i] = *ptr_cpy++;

	free(ptr);
	return (memory);
}

/**
 * assign_lineptr - assignment of lineptr for _getline
 * @lineptr: buffer to store input string
 * @n: size of lineptr
 * @buffer: string to assign to lineptr
 * @buff: size of buffer
 */
void assign_lineptr(char **lineptr, size_t *n, char *buffer, size_t buff)
{
	if (*lineptr == NULL)
	{
		if (buff > 120)
			*n = buff;
		else
			*n = 120;
		*lineptr = buffer;
	}
	else if (*n < buff)
	{
		if (buff > 120)
			*n = buff;
		else
			*n = 120;
		*lineptr = buffer;
	}
	else
	{
		_strcpy(*lineptr, buffer);
		free(buffer);
	}
}

/**
 * _getline - reads input from a line
 * @lineptr: buffer to store input
 * @n: size of lineptr
 * @line: line to read from
 * Return: number of bytes
 */
ssize_t _getline(char **lineptr, size_t *n, FILE *line)
{
	static ssize_t i
	ssize_t r;
	char a = 'x', *buffer;
	int b;

	if (i == 0)
		fflush(line);
	else
		return (-1);
	i = 0;

	buffer = malloc(sizeof(char) * 120);
	if (!buffer)
		return (-1);

	while (a != '\n')
	{
		b = read(STDIN_FILENO, &a, 1);
		if (b == -1 || (b == 0 && i == 0))
		{
			free(buffer);
			return (-1);
		}

		if (b == 0 && i != 0)
		{
			i++;
			break;
		}

		if (i >= 120)
			buffer = -realloc(buffer, i, i + 1);
		buffer[i] = c;
		i++;
	}
	buffer[i] = '\0';

	assign_lineptr(lineptr, n, buffer, i);

	r = i;
	if (b != 0)
		i = 0;
	return (r);
}
