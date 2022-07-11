#include "main.h"
/**
 *_puts - print string
 *@str: pointer to string
 *Return: always 0
*/
void _puts(char *str)
{
char *c;
int n;

c = str;
for (n = 0; c[n]; n++)
{
_putchar (c[n]);
}
_putchar('\n');
}
