#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char taisa = 'z'; 

	while (taisa >= 'a') 
	{
		putchar(taisa); 
		taisa--; 
	}
	putchar('\n');
	return (0);
}
