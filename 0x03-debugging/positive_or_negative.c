#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - prints positive or negative int
 * @i: parameter i
 * Return: Always 0 (Success)
 */
int positive_or_negative(int i)
{

if (i > 0)
{
	printf("%d is positive\n", i);
}
if (i == 0)
{
	printf("%d is zero\n", i);
}
if (i < 0)
	printf("%d is negative\n", i);
return (0);
}
