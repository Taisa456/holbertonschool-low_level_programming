#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char taisa = 'a'; 

	while (taisa <= 'z') 
	{
		_putchar(taisa); 
		taisa++; 
	}
	_putchar('\n');
}
