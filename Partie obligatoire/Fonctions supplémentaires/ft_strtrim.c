/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 23:31:36 by faventur          #+#    #+#             */
/*   Updated: 2022/02/23 20:41:36 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strtrim() function allocates (with malloc(3)) and returns a
** copy of the string s without the characters specified in set at the
** beginning and at the end of the string. If s doesn't contain anyone
** of the specified characters, the function returns a copy of s. If
** the allocation fails, the function returns NULL.
**
** Return Value: The function returns a trimmed copy of s or a "fresh"
** one.
*/

#include "libft.h"

static int	ft_check_charset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_trim_and_copy(char *dest, const char *src, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] && ft_check_charset(src[i], set))
		i++;
	while (src[i] != '\0')
	{
		if (ft_check_charset(src[i], set)
			&& (ft_check_charset(src[i + 1], set) || src[i + 1] == '\0'))
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

static size_t	ft_trim_and_count(const char *s, const char *set)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i] && ft_check_charset(s[i], set))
		i++;
	while (s[i] != '\0')
	{
		if (ft_check_charset(s[i], set)
			&& (ft_check_charset(s[i + 1], set) || s[i + 1] == '\0'))
			return (counter);
		else
			counter++;
		i++;
	}
	return (counter);
}

char	*ft_strtrim(const char *s, const char *set)
{
	char	*copy;
	size_t	len;

	len = ft_trim_and_count(s, set);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	ft_trim_and_copy(copy, s, set);
	return (copy);
}
