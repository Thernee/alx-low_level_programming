#include "main.h"
#include <stdio.h>

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
