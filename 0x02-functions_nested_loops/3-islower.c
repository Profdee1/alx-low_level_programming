#include "main.h"
/**
  *_islower - islower
  *Description: 'Checks for lowercase'
  *Return: always 0 (success)
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
