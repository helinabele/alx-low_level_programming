/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 *
 * Return: address of s
 */
char *cap_string(char *s)
{
	int index = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + index))
	{
		if (*(s + index) >= 'a' && *(s + index) <= 'z')
		{
			if (index == 0)
				*(s + index) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + index - 1))
						*(s + index) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
