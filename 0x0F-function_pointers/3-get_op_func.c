#include "3-calc.h"

/**
 * get_op_func - selects appropriate funtion for an operation
 *
 * @s: The string to be given
 * Return: correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
		/*
		 * if (ops[i].op[0] == s[0])
		*{
		*	break;
		*}
		 */
	}
	return (ops[i].f);
}
