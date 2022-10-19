#include "main.h"
/**
 * _islower - Main function of the program.
 *@c: parameter for function _islower.
 *
 * Return: Return 1 if the letter is lowercase, Returm 0 if otherwise.
 */
int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
