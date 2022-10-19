#include "main.h"
/**
 * main - Main function of the program.
 *
 * Return: Return 0 if successful.
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while(alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');


}
