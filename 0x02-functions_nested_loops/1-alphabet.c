#include "main.h"
/**
  *print_alphabet - alphabet game
  *Description: 'prints the alphabet, in lowercase'
  *Return: always 0
  */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
