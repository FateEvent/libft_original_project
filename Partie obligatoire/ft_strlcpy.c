#include <string.h>

/**
 * The strlcpy() function copies a string. It is designed to be a safer, more consistent, and less
 * error prone replacement for strncpy(3). Unlike that function, strlcpy() takes the full size of the
 * buffer (not just the length) and guarantees to NUL-terminate the result (as long as size is larger
 * than 0. Note that a byte for the NUL should be included in size. Also note that strlcpy() only
 * operates on true "C" strings. This means that for src must be NUL-terminated.
 * 
 * The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst,
 * NUL-terminating the result.
 * 
 * Return Values: The strlcpy() function returns the total length of the string it tried to create.
 * It was done to make truncation detection simple.
 */

size_t  ft_strlcpy(char *dest, const char *src, size_t size);

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (size == 0 || srclen == '\0')
		return (0);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
