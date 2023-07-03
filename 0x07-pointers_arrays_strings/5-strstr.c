#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *c = needle;

		while (*i == *c && *c != '\0')
		{
			i++;
			c++;
		}

		if (*c == '\0')
			return (haystack);
	}

	return (0);
}
