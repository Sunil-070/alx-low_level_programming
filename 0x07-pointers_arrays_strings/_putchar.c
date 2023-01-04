#include "main.h"
#include <unistd.h>
/**
 * _putchar wrotes character c to stdout
 * @c:print charactor
 * Return: success 1 or -1 on error setting errno appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1);
			}
