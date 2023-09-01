#include "main.h"
/**
  * factorial - Calculate the factorial of a number
  * @b: the number to calculate the factorial
  * Return: integer value
  */
int factorial(int b)
{
	if (b < 0)
		return (-1);

	if (b <= 1)
		return (1);

	return (b * factorial(b - 1));
}
