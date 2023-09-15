#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that print a name
 * @nane: string to add
 * @f: pointer to the function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return;
	f(name);
}
