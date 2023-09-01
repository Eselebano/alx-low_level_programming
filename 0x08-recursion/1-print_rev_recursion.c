#include "main.h"
/**
  * _print_rev_recursion - Print a string in reverse
  * @s: the string to reverse
  * Return: Nothing.
  */
void _print_rev_recursion(char *r)
{
	if (*r == '\0')
	{
		return;
	}

	r++;
	_print_rev_recursion(r);
	r--;
	_putchar(*r);
}
