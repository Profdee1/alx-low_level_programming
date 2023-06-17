#include <stdio.h>
/**
 * main - Smile in the mirror
 * Description: Print lowercase alphabet in reverse
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
