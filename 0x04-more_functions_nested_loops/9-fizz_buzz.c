#include "main.h"
#include <stdio.h>

/**
 * main - Fizz-Buzz
 *
 * Return: Always 0, always success
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (!(i % 3 == 0))
			printf("Fizz ");
		else if (!(i % 5 == 0))
			printf("Buzz ");
		else if (!(i % 15 == 0))
			printf("fizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
