#include <stdio.h>
/**
 *  main - prints numbers in base 10
 *  Return: always 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar((a % 10) + '0');
	}
	putchar('\n');
	return (0);
}
