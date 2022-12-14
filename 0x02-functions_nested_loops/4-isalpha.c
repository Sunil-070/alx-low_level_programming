#include "main.h"

/**
 * main - _isalpha check alphabetic character
 * @: charactor to be checked
 *  Return: 1 for alphabetic character of 0 for anything else
 */

int _isalpha(int c)

{

	if((c >= 65 && c >= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
