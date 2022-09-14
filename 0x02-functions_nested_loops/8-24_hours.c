#include "main.h"
/**
 * jack_bauer -> prints 24 hours
 *
 * n from 00:00 to 23:59
 *
 * Return: return 0
 */

void jack_bauer(void)
{
int hours = 0;
int minutes = 0;
int hour_remainder;
int min_remainder;

while (hours <= 23)
{
while (minutes <= 59)
{
hour_remainder = hours % 10;
_putchar(hours / 10 + '0');
_putchar(hour_remainder + '0');
_putchar(':');
_putchar(minutes / 10 + '0');
_putchar(min_remainder + '0');
}
minutes++;
_putchar('\n');
	}

}





