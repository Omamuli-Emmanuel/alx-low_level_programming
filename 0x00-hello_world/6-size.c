#include <stdio.h>

/**
 * main - Enrty point
 * Description: 'prints sizes using printf'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	float f;
	long long int lli;
	long int li;
	char c;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));

	return (0);
}
