#include <stdio.h>
/**
 * main - Numberz
 * Description: Print digits of base 10 char
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
