/**
 * _strcat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int l = 0, i;

	while (dest[l])
	{
		dl++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[l] = src[i];
		l++;
	}

	dest[l] = '\0';
	return (dest);
}
