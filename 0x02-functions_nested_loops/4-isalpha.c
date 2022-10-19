#include "main.h"
/**
 *_isalpha - Main function of the program.
 *@c: Parameter for the function (an integer type).
 *
 *Return: Return 1 if letter, return 0 if otherwise.
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
