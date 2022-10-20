#include "main.h"
/**
 *jack_bauer - main function of the program.
 */
void jack_bauer(void)
{
	int dh, h, m, s, i, j;

	for (i = 0; i < 24; i++)
	{
		dh = i / 10;
		h = i % 10;

		for (j = 0; j < 60; j++)
		{
			m = j / 10;
			s = j % 10;

			_putchar('0' + dh);
			_putchar('0' + h);
			_putchar(':');
			_putchar('0' + m);
			_putchar('0' + s);
			_putchar('\n');
		}
	}
}




