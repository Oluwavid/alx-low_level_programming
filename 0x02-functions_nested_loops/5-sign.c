#include "main.h"
/**
 *print_sign - Main function for this program.
 *@n: Integer variable.
 *
 *Return: Return -1, 0, or 1 based on given conditions.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
		return (0);

	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}

}


