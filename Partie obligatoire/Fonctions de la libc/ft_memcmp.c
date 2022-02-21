/**
 * The memcmp() function compares the first n bytes (each interpreted as
 * unsigned char) of the memory areas s1 and s2.
 * 
 * Return Value: The memcmp() function returns an integer less than,
 * equal to, or greater than zero if the first n bytes of s1 is found,
 * respectively, to be less than, to match, or be greater than the first
 * n bytes of s2.
 * For a nonzero return value, the sign is determined by the sign of the
 * difference between the first pair of bytes (interpreted as unsigned
 * char) that differ in s1 and s2.
 */

#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if ((str2[i] == '\0' && str1[i] == '\0') || n == 0)
		return (0);
	if (n == 1)
		return (str1[0] - str2[0]);
	n--;
	while (i < n && str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			if (str1[i] - str2[i] > 0)
				return (1);
			else if (str1[i] - str2[i] < 0)
				return (-1);
		}
		i++;
	}
	return (0);
}
