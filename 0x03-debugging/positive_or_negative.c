#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - prints a number's sign
 * @i: integer
 *
 * Description: Prints whether a number is positive, negative, or zero.
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}

