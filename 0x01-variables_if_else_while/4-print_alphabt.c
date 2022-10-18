#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Return 0 if program is succesful.
 */
int main(void)
{
	char l = 'a';

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'e' || l == 'e')
			continue;
			putchar(l);
	}

	putchar('\n');

	return (0);
}
