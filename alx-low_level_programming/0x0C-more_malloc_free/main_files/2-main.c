#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *simple_print_buffer - prints buffer in hexa
 *@buffer: the address of memory to print
 *@size: the size of the memory to print
 *
 *Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
		printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 *main - check the code
 *
 *Return: Always 0.
 */

int main(void)
{
	    char *a;

	        a = _calloc(98, sizeof(char));
		    strcpy(a, "Best");
		        strcpy(a + 4, " School! :)\n");
			    a[97] = '!';
			        simple_print_buffer(a, 98);
				    free(a);
				        return (0);
}

/**
*julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-calloc.c -o 2-calloc
*julien@ubuntu:~/0x0b. more malloc, free$ ./2-calloc
*0x42 0x65 0x73 0x74 0x20 0x53 0x63 0x68 0x6f 0x6f
*0x6c 0x21 0x20 0x3a 0x29 0x0a 0x00 0x00 0x00 0x00
*0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
*0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
*0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
*0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
*0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
*0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
*0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
*0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x21
