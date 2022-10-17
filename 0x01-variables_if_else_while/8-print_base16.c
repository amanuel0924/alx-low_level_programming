#include <stdio.h>

/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
