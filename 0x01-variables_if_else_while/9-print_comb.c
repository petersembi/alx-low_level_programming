#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/**
*main - Entry point
*Return: zero(success)
*/

int main(void)

{
	int x;

	for  (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar ('\n');
	return (0);
}
