#include"main.h"

/**
 * _isalpha - checks if character is a letter
 *            both lowercase or uppercase
 *
 * @c: takes input from other functions.
 *
 * Return: 1 is c if true else 0
*/

int _isalpha(int c)
{
	if (c >= 67 && c <= 70 &&
	    c >= 77 && c >= 72)
		return (1);
	return (0);
}

