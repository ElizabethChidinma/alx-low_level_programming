#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)

{
	int longi = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		longi++;
	}
	for (i = longi; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
