#include "main.h"

/**
 * _islower - uppercase letter
 * @c: character chacked
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
