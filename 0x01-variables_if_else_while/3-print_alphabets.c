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
	int ch;

	for  (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
