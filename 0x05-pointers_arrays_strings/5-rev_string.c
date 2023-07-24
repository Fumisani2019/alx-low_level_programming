#include "main.h"

/**
 * rev_string - Reserves a string
 * @s: input string
 */
void rev_string(char *s)
{
	char temp;
	int start = 0;
	int end = 0;

	while (s[end] != '\0')
	end++;

	end--;

	while (start < end)
	{

		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
