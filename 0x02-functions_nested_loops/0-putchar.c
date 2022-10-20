#include <unistd.h>
#include <main.h>

/**
 * _putchar - returns c to stdout
 * @c: character to print
 * Return: On success 1.
 * On error, -1 is printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
