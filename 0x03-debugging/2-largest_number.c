#include "main.h"

/**
 * largest_nuumber - returns the largest of the three numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * return: largest number
 */

int largest_number(int a, int b, int c)

{
int larget;
if (a >= b &&  b >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
