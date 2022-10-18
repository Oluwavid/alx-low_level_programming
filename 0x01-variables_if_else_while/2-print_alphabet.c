#include <stdio.h>

/**
  * main - Entry point for the program.
  *
  * Return: Return value of 0 if succesful.
  */
int main(void)
{
	char a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
