#include "main.h"

/**
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c[] = "_putchar";
	for ( int c = 0; c < 8; c++){
_putchar(c[c]);
	}

	_putchar('\n');

	return (0);
}
