#include <stdio.h>

/**
 * main - main block
 * Description: computes and prints the first 98 numbers in the Fibonacci sequence.
 * Return: 0
 */
int main(void)
{
    int i = 0;
    unsigned long int a = 0, b = 1, next = 0;

    printf("%lu, %lu", a, b);

    while (i < 96)
    {
        next = a + b;
        a = b;
        b = next;
        printf(", %lu", next);
        i++;
    }

    putchar('\n');
    return (0);
}
