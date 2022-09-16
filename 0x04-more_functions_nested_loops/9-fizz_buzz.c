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
		if (!(i % 3))
			printf("Fizz ");
		else if (!(i % 5))
			printf("Buzz ");
		else if (!(i % 3 && 5))
			printf("fizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
