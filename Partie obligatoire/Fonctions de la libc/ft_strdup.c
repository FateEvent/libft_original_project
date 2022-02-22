/*
** The strdup() function returns a pointer to a new string which is a
** duplicate of the string s. Memory for the new string is obtained
** with malloc(3), and can be freed with free(3).
** 
** Return Value: The strdup() function returns a pointer to the
** duplicated string, or NULL if insufficient memory was available.
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;

	dst = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dst == NULL)
		return (NULL);
	ft_strcpy(dst, src);
	return (dst);
}