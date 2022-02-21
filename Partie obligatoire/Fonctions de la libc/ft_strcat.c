/**
 * The strcat() function appends the src string to the dest string,
 * overwriting the terminating null byte ('\0') at the end of dest, and
 * then adds a terminating null byte. The strings may not overlap, and
 * the dest string must have enough space for the result. If dest is not
 * large enough, program behavior is unpredictable; buffer overruns are a
 * favorite avenue for attacking secure programs.
 * 
 * Return Value: The strcat() function returns a pointer to the resulting
 * string dest.
 */

#include <string.h>

size_t	ft_strlen(const char *str);
char	*ft_strcat(char *dest, const char *src);

char	*ft_strcat(char *dest, const char *src)
{
	size_t  i;
	size_t  j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
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
