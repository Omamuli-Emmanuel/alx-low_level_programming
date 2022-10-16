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
	double doubleType;
	char charType;

	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	printf("Size of double: %zu byte(s)\n", sizeof(doubleType));
	printf("Size of char: %zu bytes(s)\n", sizeof(charType));

	return (0);
}
