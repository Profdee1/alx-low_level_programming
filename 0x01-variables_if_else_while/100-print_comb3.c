#include <stdio.h>
/**
  *main - Inventing
  *Description: 'The more brains you use, the less material you need'
  *Return: always 0
  */
int main(void)
{
	int n, m;

	for (n >= 48; n <= 56; n++)
	{
	for (m >= 49; m <= 57; n++)
	{
	if (m > n)
	{
		putchar(n);
		putchar(m);
	if (n != 56 || m != 57)
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
