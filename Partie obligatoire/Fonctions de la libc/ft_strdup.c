/**
 * The strdup() function returns a pointer to a new string which is a
 * duplicate of the string s. Memory for the new string is obtained
 * with malloc(3), and can be freed with free(3).
 * 
 * Return Value: The strdup() function returns a pointer to the
 * duplicated string, or NULL if insufficient memory was available.
 */

#include <stdlib.h>

char	*ft_strcpy(char *dest, const char *src);
size_t  ft_strlen(const char *str);
char	*ft_strdup(const char *src);

char	*ft_strdup(const char *src)
{
	char	*dst;

	dst = malloc (ft_strlen(src) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strcpy(dst, src);
	return (dst);
}

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	counter = 0;
	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
