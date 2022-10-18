#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Return 0 if program is succesful.
 */
int main(void)
{
	char l = 97;

	for (l = 97; l <= 122; l++)
	{
		if (l == 101 || l == 113)
			continue;
			putchar(l);
	}

	putchar('\n');

	return (0);
}
