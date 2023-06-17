#include <stdio.h>
/**
 * main - Print alphbet except q and e
 * Description: 'alphabet soup'
 * Return: always 0
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
	if (ch != 'e' && ch != 'q')
	{
	putchar(ch);
	}
	ch++;
	}
	putchar('\n');
	return (0);
}
