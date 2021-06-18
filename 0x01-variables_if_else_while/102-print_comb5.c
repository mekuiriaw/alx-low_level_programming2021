#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i != j && i < j)
			{
				if (i < 10)
				{
					putchar('0');
				}
				putchar(i % 10 + '0');
				putchar(' ');
				if (j < 10)
				{
					putchar('0');
				}
				putchar(j % 10 + '0');
				if (i != 88)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
