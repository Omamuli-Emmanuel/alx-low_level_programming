#include <stdio.h>

/**
 * main - Enrty point
 * Description: 'prints sizes using printf'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	float floatType;
	long long int c;
	long int longType;
	char charType;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of a long int %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(longType));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(floatType));

	return (0);
}
