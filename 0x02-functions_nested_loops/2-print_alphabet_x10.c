#include "main.h"

/**
 * main - alphabet
 * print= prints 10 times the alphabet-Entry point
 *
 * Return: 0
 */
int main(void)

{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar ('\n');
	}
	return (0);
}
