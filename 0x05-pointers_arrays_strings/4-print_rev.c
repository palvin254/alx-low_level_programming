#include "main.h"
/**
 *print_rev - reverse string
 *@s: pointer to string
 *Return: always 0
*/
void print_rev(char *s)
{
int n;

n = 0;
while (s[n] != '\0')
{
n++;
}

for (n = n - 1; n >= 0; n--)
{
_putchar (s[n]);
}

_putchar('\n');
}
