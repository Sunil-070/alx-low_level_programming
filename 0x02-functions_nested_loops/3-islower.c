#include "main.h"

/**
 * main - check lowercase charactors
 * @c: charactor to be checked
 * Return: 1 for lowercase charactor or0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
