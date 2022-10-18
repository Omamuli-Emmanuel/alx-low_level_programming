#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char leet;

	for (leet = 'a'; leet <= 'z'; leet++)
		putchar(leet);
	for (leet = 'A'; leet <= 'Z'; leet++)
		putchar(leet);
	putchar('\n');

	return (0);
}
