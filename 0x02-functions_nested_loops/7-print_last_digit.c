#include "main.h"
/**
 *print_last_digit - Main fucntion of the program.
 *@n: Integer variable for the function.
 *
 *Return: Return value of last digit of a given number.
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	putchar(m);

	return (m);
}
