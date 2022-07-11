#include "main.h"
/**
 *swap_int - swap integers
 *@a: first integer
 *@b: second integer
 *Return: always 0
*/
void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
}
