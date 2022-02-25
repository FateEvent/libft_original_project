/*
** The ft_strmap() function applies the f function to every character of
** the string passed as a parameter by precising its index in order to
** create a new "fresh" string (with malloc(3)) resulting from the
** successive applications of f.
*/

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	while (s[i] && s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
