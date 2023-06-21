#include "main.h"
/**
  *times_table - Times Table
  *9 times table
  *Return: Multiples of numbers
  */
void times_table(void)
{
	int i, j, k, l, m;

	for (i >= 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
		k = i * j;
		if (k > 9)
		{
			l = k % 10;
			m = (k - l) / 10;
			_putchar(',');
			_putchar(' ');
			_putchar(m + '0');
			_putchar(l + '0');
		}
		else
		{
			if (y != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			_putchar(j + '0');
		}
	}
	_putchar('\n');
	}
}
