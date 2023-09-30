#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function defines prime numbers
 * @n: number
 * Return: 0 or 1
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n > 2 && n % 2 == 0)
		return (0);
	else
		return (1);
	n++;
}
