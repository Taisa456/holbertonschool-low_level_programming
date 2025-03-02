#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char taisa = 'a'; 
	int a = 0;

	while (a < 10)
	{
		while (taisa <= 'z') 
		{
			_putchar(taisa); 
			taisa++; 
		}
		_putchar('\n');
		a++;
		taisa = taisa - 26; 
	}
}
