/**
 * The memchr() function scans the initial n bytes of the memory area
 * pointed to by s for the first instance of c. Both c and the bytes
 * of the memory area pointed to by s are interpreted as unsigned char.
 * 
 * Return Value: The memchr() function returns a pointer to the matching
 * byte or NULL if the character does not occur in the given memory area.
 */

#include <string.h>

size_t	ft_strlen(const char *str);
void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	unsigned char	letter;
	size_t			len;
	size_t			i;

	str = (char *)s;
	letter = (unsigned char)c;
	len = ft_strlen(str);
	i = 0;
	if (n > len)
		return (NULL);
	while (*str != '\0' && i < n)
	{
		if (*str == letter)
		{
			return ((void *)str);
		}
		i++;
		str++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t  counter;

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
