#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char leet, c, d;

	c = 'c';
	d = 'd';

	for (leet = 'a'; leet <= 'z'; leet++)
	{
		if (leet != c && leet != d)
		{
			putchar (leet);
		}
	}

	putchar ('\n');

	return (0);
}
