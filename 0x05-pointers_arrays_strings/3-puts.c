#include "main.h"

/**
 * _puts - a function that prints a string
 *
 * @str: a pointer to a string
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
