#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function returns the value of x raised to the power y
 * @x: number
 * @y: power
 * Return: value of x raised to power y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
