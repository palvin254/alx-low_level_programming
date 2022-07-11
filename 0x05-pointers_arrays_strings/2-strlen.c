#include "main.h"
/**
 *_strlen - length of string
 *@s: pointer to string
 *Return: always 0
*/
int _strlen(char *s)
{
int f;
f = 0;
while (s[f] != '\0')
{
f++;
}
return (f);
}
