#include <unistd.h>

/**
 * _putchar - writes the charactor cto stdout
 * @c: the charactor to print
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriatery.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
