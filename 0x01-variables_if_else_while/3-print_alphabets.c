#include <stdio.h>
/**
 * main - Entry point
 * *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l_case;
	char u_case;

	for (l_case = 'a'; l_case <= 'z'; l_case++)
	{
		putchar(l_case);
	}

	for (u_case = 'A'; u_case <= 'Z'; u_case++)
	{
		putchar(u_case);
	}

	putchar('\n');

	return (0);
}
