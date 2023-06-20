#include "main.h"

/**
 * _isalpha - function that check if
 *	character is a letter
 *
 *@c: checks input of function
 *
 * Return: 1 if 'c' is letter
 *			otherwise always 0 (success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
