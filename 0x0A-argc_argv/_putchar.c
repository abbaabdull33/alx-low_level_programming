#include <unistd.h>

/**
 * _putchar - Writes Character c To stdout
 * @c: The Character To be Printed
 *
 * Return: On Success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
