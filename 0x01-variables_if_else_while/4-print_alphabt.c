#include <stdio.h>
/**
 * main - Print alphbet except q and e
 * Description: 'alphabet soup'
 * return: always 0 (Success)
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
