#include <stdio.h>
/**
 * main - Entry point
 * Description: 'alphabet soup'
 * return: always 0
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
