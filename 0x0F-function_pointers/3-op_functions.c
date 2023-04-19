#include "3-calc.h"
/**
 * op_add - function to add two numbers
 *
 * op_sub - function to subtract numbers
 *
 * op_mul - function to multiple numbers
 *
 * op_div - function to divide numbers
 *
 * op_mod - function o calculate modules
 *
 * @a: int value
 *
 * @b: int value
 *
 * Return: results of a math equation
 */
int op_add(int a, int b)
{
	return (a + b); /*addition*/
}

/**
 * op_sub - function to subtract numbers
 *
 * @a: int value
 *
 * @b: int value
 *
 * Return: results of a math equation
 */
int op_sub(int a, int b)
{
	return (a - b); /*subtraction*/
}

/**
 * op_mul - function to multiple numbers
 *
 * @a: int value
 *
 * @b: int value
 *
 * Return: results of a math equation
 */
int op_mul(int a, int b)
{
	return (a * b); /*mutiplication*/
}

/**
 * op_div - function to divide numbers
 *
 * @a: int value
 *
 * @b: int value
 *
 * Return: results of a math equation
 */
int op_div(int a, int b)
{
	return (a / b); /*dividion*/
}

/**
 * op_mod - function o calculate modules
 *
 * @a: int value
 *
 * @b: int value
 *
 * Return: results of a math equation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
