#include "3-calc.h"

/**
 * op_add - returns the sum of a and b.
 * @a: integer to add.
 * @b: integer to add.
 * Return: add.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: integer to subtract.
 * @b: integer to subtract.
 * Return: subtract.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 * @a: integer to multiply.
 * @b: integer to multiply.
 * Return: multiplication.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b.
 * @a: integer to divide.
 * @b: integer to divide.
 * Return: division.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);

}

/**
 * op_mod - returns the remainder of the division of a by b.
 * @a: integer to take the rest.
 * @b: integer to take the rest.
 * Return: remainder of the division.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
