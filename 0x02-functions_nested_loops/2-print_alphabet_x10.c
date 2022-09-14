#include "main.h"
/**
 *print_alphabet_x10(void) -> prints lowercase alphabets
 */
void print_alphabet_x10(void)
{
int p;
int x;

for (x = 0; x <= 10;)

{
for (p = 'a' ; p <= 'z' ; p++)
{
_putchar(p);
}

_putchar('\n');
}


}

