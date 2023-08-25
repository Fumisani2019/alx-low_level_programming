#include <stdio.h>
/**
 * main - combination Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones = '0';
	int tens = '1';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '7'; hundreds++)
	{
		for (tens = '0'; tens <= '8'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == tens) || (tens == hundreds) || (hundreds > tens)))
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundreds == '7' && tens == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
