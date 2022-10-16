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

	printf("Size an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
	printf("Size of lont int %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of double: %lu byte(s)\n", (unsigned long)sizeof(longType));
	printf("Size of char: %lu bytes(s)\n", (unsigned long)sizeof(charType));

	return (0);
}
