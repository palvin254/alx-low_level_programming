#include "main.h"
/**
 *puts_half - print second half of string
 *@str: pointer to  string
 *Return: always 0
*/
void puts_half(char *str)
{
int i, last;

i = 0;
while (str[i] != '\0')
{
i++;
}

last = (i + 1) / 2;

for (i = last; str[i]; i++)
{
_putchar (str[i]);
}

_putchar('\n');
}
