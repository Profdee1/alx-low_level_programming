#include "main.h"
/**
  *print_last_digit - 3 colors, 10 digits & 7 notes
  *Description: 'Shades of figures and colours'
  *@i: inputted integer
  *Return: Value of last digit
  */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
}
