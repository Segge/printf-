#include <stdio.h>
#include "main.h"

/**
 *main-program that prints numbers
 *or fizz or buzz or fizzBuzz
 *Return:returns 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
		printf("FizzBuzz");
		printf(" ");
		}
		else if (a % 3 == 0)
		{
		printf("Fizz");
		printf(" ");
		}
		else if (a % 5 == 0)
		{
		printf("Buzz");
		printf(" ");
		}
		else
		{
		printf("%i", a);
			if (a < 100)
			{
			printf(" ");
			}
		}
	}
	printf("\n");
	return (0);
}
