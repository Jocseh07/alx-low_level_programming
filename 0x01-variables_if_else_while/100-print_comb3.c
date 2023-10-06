#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - print combination of numbers
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	/* your code goes there */
	int n = '0';
	int k = '1';

	while (n <= '8')
	{
		while (k <= '9')
		{
			if (k > n)
			{
				putchar(n);
				putchar(k);
				if (n != '8' || k != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			k++;
		}
		n++;
		k = '1';
	}
	putchar('\n');
	return (0);
}
