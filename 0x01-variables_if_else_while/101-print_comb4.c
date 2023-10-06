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
	int l = '2';

	while (n <= '7')
	{
		while (k <= '8')
		{
			while (l <= '9')
			{
				if (k > n && l > k)
				{
					putchar(n);
					putchar(k);
					putchar(l);
					if (n != '7' || k != '8' || l != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				l++;
			}
			k++;
			l = '2';
		}
		n++;
		k = '1';
	}
	putchar('\n');
	return (0);
}
