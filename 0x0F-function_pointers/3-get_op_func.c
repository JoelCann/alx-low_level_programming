#include "3-calc.h"

/**
 * get_op_func - returns pointer to right op func
 * @s: string operator
 *
 * Return: correct pointer function
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
	int a = 0;

	while (a < 5)
	{
		if (s && s[0] == ops[a].op[0] && !s[1])
			return (ops[a].f);
		i += 1;
	}

	return (NULL);
}
