#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char leet, e, q;

	e = 'e';
	q = 'q';

	for (leet = 'a'; leet <= 'z'; leet++)
	{
		if (leet != e && leet != q)
		{
			putchar (leet);
		}
	}

	putchar ('\n');

	return (0);
}
