/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int index, len;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (index = 0; *(s + index); index++)
	{
		for (len = 0; len <= 9; len++)
		{
			if (a[len] == *(s + index))
				*(s + index) = b[len];
		}
	}
	return (s);
}
