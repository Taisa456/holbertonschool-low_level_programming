#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char taisa = '0';

	while (taisa <= '9')
	{
		putchar(taisa);
		taisa++;
	}

	putchar ('\n');

	return (0);
}
