#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in revervse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
