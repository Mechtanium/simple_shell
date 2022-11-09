#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

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
int _strcpy(char **str1, char *str2, unsigned int s);
char *_strcln(char *str, int c);
void interactive(char **env);
void non_interactive(char **env);
#endif
