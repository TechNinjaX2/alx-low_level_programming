#include "3-calc.h"
#include <stdio.h>

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

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
	int i;

	while (ops[i].op != NULL)
    	{
    	    if (*s == *(ops[i].op) && s[1] == '\0')
    	    {
    	        return ops[i].f;
    	    }
            i++;
   	 }
   	 return NULL;
}
	/*if (s != "+" || s !=  "-" || s != "*" || s != "/" || s != "%")
	{
		return (NULL);
	}
	while(i < 6)
	{
		((ops[i] == s));
		return()
		i++;*/
