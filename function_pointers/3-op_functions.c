#include "3-calc.h"

/**
 * op_add - addition
 * @a: int
 * @b: int
 * Return: result
 */
int op_add(int a, int b) { return (a + b); }

/**
 * op_sub - subtraction
 * @a: int
 * @b: int
 * Return: result
 */
int op_sub(int a, int b) { return (a - b); }

/**
 * op_mul - multiplication
 * @a: int
 * @b: int
 * Return: result
 */
int op_mul(int a, int b) { return (a * b); }

/**
 * op_div - division
 * @a: int
 * @b: int
 * Return: result or error if b == 0
 */
int op_div(int a, int b) { return (a / b); }

/**
 * op_mod - modulo
 * @a: int
 * @b: int
 * Return: result or error if b == 0
 */
int op_mod(int a, int b) { return (a % b); }

