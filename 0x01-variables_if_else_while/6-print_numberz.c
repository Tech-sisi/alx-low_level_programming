#include <stdio.h>
/**
 *  main - prints numbers in base 10
 *  Return: always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 10; a++)
	{
		putchar((a % 10) + '0');
	}
	putchar('\n');
	return (0);
}
