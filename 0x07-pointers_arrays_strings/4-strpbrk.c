#include "main.h"
/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  * Return: the string since the first found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
	int p = 0, q;

	while (s[p])
	{
		q = 0;

		while (accept[q])
		{
			if (s[p] == accept[q])
			{
				s += p;
				return (s);
			}

			q++;
		}

		p++;
	}

	return ('\0');
}
