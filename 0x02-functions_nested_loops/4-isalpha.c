#include "main.h"
/**
  *_isalpha - isalpha
  *Description: checks for alphabetic character
  *@c: The charcater in ASCII code
  *Return: 1 if lowercase or uppercase. 0 for otherwise
  */
int _isalpha(int c)
{
	if ((c >= 97 && <= 122) || (c >= 65 && <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
