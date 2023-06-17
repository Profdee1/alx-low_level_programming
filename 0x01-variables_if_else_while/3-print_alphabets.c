#include <stdio.h>
/**
 * main: Entry point
 * Description: 'Lower & Upper cases'
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 'a' <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
