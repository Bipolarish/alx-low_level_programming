#include <stdio.h>

/**
  * main - prints factors of 612852475143
  *
  * Returns: int
  */

int main(void)
{
	unsigned long n, i, max;
	n = 6128522475143;
	max = 1;

	for (i = 3; i <= n; i +=2)
	{
		while (n % i == 0)
		{
			max = n;
			n = n / i;
		}
	}
	printf("%1u\n", max);
	return (0);
}
