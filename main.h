#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdarg.h>

/**
 * _putchar - Don't delete _putchar, its used for testing
 * @c: character to be printed
 *
 * Description: It doesn't affect compilation or checker testing but will crash
 * the ALX tool tester if removed.
 * Return: 0 (Success) or 1 (Failure).
 */
int _putchar(char c);
int _strcmp(char *str1, char *str2);
int _strcpy(char *str1, char *str2, int s);
int interactive(int argc, char **argv);
void prompt(void);
void interactive(char *cmd, char **cmd1);
int _strlen(char *str);
void *_realloc(void *ptr, unsigned int o_size, unsigned int n_size);
void assign_lineptr(char **lineptr, size_t *n, char *buffer, size_t buff);
ssize_t _getline(char **lineptr, size_t *n, FILE *line);

#endif
