/**
 * _strcat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, len = 0;
	while (*(dest + index))
		index++;
	while ((*(dest + index) = *(src + len)))
	{
		index++;
		len++;
	}
	return (dest);
}
