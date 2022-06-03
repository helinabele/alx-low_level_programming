/*
 * File: 5-print_numbers.c
 * Auth: HELINA BELETE
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++){
		putchar(("num % 10") + '0');

	printf("\n");

	return (0);
}
