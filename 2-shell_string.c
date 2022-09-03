#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @str: The address of the string
 *
 * Return: The length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}
