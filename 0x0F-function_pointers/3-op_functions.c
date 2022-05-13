#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - addition function
 * @a: first integer variable
 * @b: second integer variable
 * Return: sum of two integers
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - subtraction function
 * @a: first integer variable
 * @b: second integer variable
 * Return: subtraction of two integers
 */

int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}

/**
 * op_mul - multiplication function
 * @a: first integer variable
 * @b: second integer variable
 * Return: multiplication of integers
 */

int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 * op_div - division function
 * @a: first integer variable
 * @b: second integer variable
 * Return: division of two integers
 */

int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - modulo function
 * @a: first integer variable
 * @b: second integer variable
 * Return: modulus of a
 */

int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
