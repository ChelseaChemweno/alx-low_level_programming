#include "main.h"
/**
 * _isalpha - checks for alphabetic letters
 *
 * @c: a charter to be checked on
 *
 * Return: returns 0 0r 1 depending on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
