#include "main.h"
/**
 *_strcpy - copy string
 *@dest: pointer to string to change
 *@src: pointer to string to change
 *Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int i;

i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}