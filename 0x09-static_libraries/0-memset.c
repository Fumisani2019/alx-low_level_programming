#include "main.h"

/**
 * _memset - memory block is filled with a specified value
 * @s: address of memory to be filled first
 * @b: the specified value 
 * @n: number of bytes in a string
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}		
