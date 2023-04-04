#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	for (i = 0; haystack[i]; ++i)
	{
		for (j = 0; needle[j] && haystack[i + j] == needle[j]; ++j)
		{}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}

