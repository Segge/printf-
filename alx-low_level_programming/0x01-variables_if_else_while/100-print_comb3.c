#include <stdio.h>
#include <stdlib.h>
/**
 *Description:main-prints all possible different combinations of two digits
 *Return: 0 if success
 *
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			if (i == j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				break;

			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
