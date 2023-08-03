#include "main.h"

/**
 * get_endianness - checks the endianness,whether big or little
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
