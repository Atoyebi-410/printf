#include "main.h"


/**
 * _strlen - this returns the lenght of a string.
 * @s: this is type char pointer
 * Return: c.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlenc - applied for constant char pointer s
 * @s: this is type char pointer
 * Return: c
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
