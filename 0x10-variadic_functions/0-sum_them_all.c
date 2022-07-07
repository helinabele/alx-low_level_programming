#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sums all arguments
  * @n: number of arguments
  * @...: variable list of arguments
  * Return: sum of all arguments
  */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;
	va_list val;

	va_start(val, n);
	for (i = 0; i < n; i++)
		result += va_arg(val, int);
	va_end(val);
	return (result);
}
