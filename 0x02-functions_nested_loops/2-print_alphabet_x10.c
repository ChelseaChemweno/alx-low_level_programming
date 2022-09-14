#include "main.h"
/**
 *print_alphabet -> prints lowercase alphabets
 */
void print_alphabet_x10(void)
{
int p;
int x;

for (x = 0; x < 10; x++)

{
for (p = 'a' ; p <= 'z' ; p++)
{
_putchar(p);
}

_putchar('\n');
}


}

