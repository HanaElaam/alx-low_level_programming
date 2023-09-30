#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n: number
 * Return: square of n
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function to get the square
 * @n: number
 * @x: number
 * Return: number
*/
int square(int n, int x)
{

	if (x * x == n)
		return (x);
	else if (x * x < n)
		return  (square(n, x + 1));
	else
		return (-1);

}
