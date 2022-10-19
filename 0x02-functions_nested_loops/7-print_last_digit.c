#include "main.h"
/**
 *print_last_digit - Main fucntion of the program.
 *@n: Integer variable for the function.
 *
 *Return: Return value of last digit of a given number.
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld >= 0)
	{
		_putchar('0' + ld);
		return (ld);
	}
	else
	{
		_putchar('0' + -ld);
		return (-ld);
	}
}
