#include "main.h"
/**
 u* print_alphabet -> prints lowercase alphabets
 *
 * return: Always 0 (success)
 */

void print_alphabet(void)
{
	int p;

	for (p = 'a' ; p <= 'z' ; p++)
	{
	_putchar(p);
	}

	_putchar('\n');
	return (0);

}

