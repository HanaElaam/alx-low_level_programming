#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: poinnter for n byte
 * @b: constant byte
 * @n: number of bytes
 * Return: *s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
