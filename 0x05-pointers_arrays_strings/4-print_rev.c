#include "main.h"
#include <unistd.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to a string
 */
void print_rev(char *s)
{
	if (s != NULL)
	{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}

	while (length > 0)
	{
	s--;
	write(1, s, 1);
	length--;
	}

	write(1, "\n", 1);
	}
}
