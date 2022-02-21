/**
 * The strncat() function is similar to the strcat() function, except that
 * it will use at most n bytes from src; and src does not need to be null-
 * terminated if it contains n or more bytes.
 * 
 * As with strcat(), the resulting string in dest is always null-terminated.
 * If src contains n or more bytes, strncat() writes n+1 bytes to dest (n
 * from src plus the terminating null byte). Therefore, the size of dest
 * must be at least strlen(dest)+n+1.
 * 
 * Return Value: The strncat() function returns a pointer to the resulting
 * string dest.
 */

#include <string.h>

size_t	ft_strlen(const char *str);
char	*ft_strncat(char *dest, const char *src, size_t n);

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dest);
	if (n < 0)
		return (NULL);
	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

size_t	ft_strlen(const char *str)
{
	size_t  counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
