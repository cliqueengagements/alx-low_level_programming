#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 *You can only use one if in your code
 *You can only use two loops in your code
 *You are not allowed to use switch
 *You are not allowed to use any ternary operation
 * Return: encoded string `s`
 */


char *leet(char *s)
{
	int i, j;

	char src[] = "aeotlAEOTL";
	char dest[] = "4307143071";


	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (src[j] == *(s + i))
				*(s + i) = dest[j];
		}
	}
	return (s);
}
