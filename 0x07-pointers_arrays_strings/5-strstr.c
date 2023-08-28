#include "main.h"
/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
	int p = 0, q = 0;

	while (haystack[p])
	{
		while (needle[q])
		{
			if (haystack[p + q] != needle[q])
			{
				break;
			}

			q++;
		}

		if (needle[q] == '\0')
		{
			return (haystack + p);
		}

		p++;
	}

	return ('\0');
}
