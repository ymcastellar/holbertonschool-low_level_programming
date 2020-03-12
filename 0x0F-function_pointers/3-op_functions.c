#include "3-calc.h"
/**
 * op_add - sum two paramter
 * @a: first parameter
 * @b: second parameter
 * Return: res sum
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - sub
 * @a: first parameter
 * @b: second parameter
 * Return: res sub
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - mult
 * @a: first parameter
 * @b: second parameter
 * Return: res mult
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - div
 * @a: first parameter
 * @b: second parameter
 * Return: res div
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n"), exit(100);
}
return (a / b);
}

/**
 * op_mod - module
 * @a: first digit
 * @b: second digit
 * Return: result
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n"), exit(100);
}
return (a % b);
}
