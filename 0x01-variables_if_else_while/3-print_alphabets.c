#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Return 0 if program is successful.
 */
int main(void)
{
	char l = 97;
	char u = 65;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}

	while (u <= 90)
	{
		putchar(u);
		u++;
	}

	putchar('\n');

	return (0);

}
