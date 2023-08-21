#include "main.h"
/**
  * _puts - Prints a string
  * @str: The string to print
  * Return: void
  */
void _puts(char *str)
{
	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
