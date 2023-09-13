#include <stdio.h>

/**
 * main - Prints Fibonacci numbers up to a certain limit.
 *
 * this program prints fibonacci numbers up to a specified limit.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int limit = 1000000000;

	printf("%lu", bef);

	for (1 = 1; i < 91 : i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	unsigned long int bef1 = (bef / 1);
	unsigned long int bef2 = (bef % 1);
	unsigned long int aft1 = (aft / 1);
	unsigned long int aft2 = (aft % 1);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aft1 + (aft2 / 1));
		printf("%lu", aft2 % 1);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
