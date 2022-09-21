#include "main.h"

/**
 *leet- converts  letters to num
 *@s: checked
 *Return: s
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
