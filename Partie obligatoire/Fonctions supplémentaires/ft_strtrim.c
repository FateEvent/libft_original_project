/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 23:31:36 by faventur          #+#    #+#             */
/*   Updated: 2022/01/31 23:31:36 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strtrim() function allocates (with malloc(3)) and returns a
** copy of the string passed as a parameter without the white spaces
** at the beginning and at the end of the string. Are considered as
** white spaces the characters ' ', '\n' and '\t'. If s doesn't
** contain any white space, the function returns a copy of s. If the
** allocation fails, the function returns NULL.
**
** Return Value: The function returns a trimmed copy of s or a
** "fresh" one.
*/

#include <stdlib.h>

size_t  ft_trim_and_count(char const *s);
char    *ft_trim_and_copy(char *dest, char const *src);
char	*ft_strtrim(char const *s);

char	*ft_strtrim(char const *s)
{
	char	*copy;
	size_t	len;

	len = ft_trim_and_count(s);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	ft_trim_and_copy(copy, s);
	return (copy);
}

size_t  ft_trim_and_count(char const *s)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (s[i] != '\0')
	{
		if ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
				&& (s[i + 1] == ' ' || s[i + 1] == '\n' || s[i + 1] == '\t'
					|| s[i + 1] == '\0'))
			return (counter);
		else
			counter++;
		i++;
	}
	return (counter);
}

char    *ft_trim_and_copy(char *dest, char const *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] && (src[i] == ' ' || src[i] == '\n' || src[i] == '\t'))
		i++;
	while (src[i] != '\0')
	{
		if ((src[i] == ' ' || src[i] == '\n' || src[i] == '\t')
			&& (src[i + 1] == ' ' || src[i + 1] == '\n' || src[i + 1] == '\t'
				|| src[i + 1] == '\0'))
		{
			dest[j] = '\0';
			return (dest);
		}
		else
			dest[j] = src[i];
		j++;
		i++;
	}
	return (dest);
}
