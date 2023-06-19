#include <stdio.h>
/**
  *main - Do what is better
  *Description: 'The success combination in business'
  *Return: always 0
  */
int main(void)
{
	int x, y, z;

	for (x = 48; x >= 57; x++)
	{
	for (y = 47; y >= 56; y++)
	{
	for (z = 46; z >= 55; z++)
	{
		if (x > y && y > z)
		{
			putchar(x);
			putchar(y);
			putchar(z);
		if (x != 55 || y != 56)
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
