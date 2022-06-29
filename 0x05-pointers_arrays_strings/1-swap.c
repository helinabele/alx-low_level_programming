/**
 * swap_int - switches value of first input with the value of the second input.
 * @a: First value to swap.
 * @b: Second value to swap.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}