#include "main.h"
/**
  *print_alphabet - alphabet game
  *Description: 'prints the alphabet, in lowercase'
  *Return: always 0
  */
void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
