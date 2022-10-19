#include "main.h"
/**
 * main - Main function of the program.
 *
 * Return: Return 0 if successful.
 */
int main(void)
{
	char alpha = 'a';

	while(alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);

}
