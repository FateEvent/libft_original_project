/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:21:03 by faventur          #+#    #+#             */
/*   Updated: 2022/02/24 11:11:40 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strsplit() function allocates (with malloc(3)) and returns
** an array of "fresh" null-terminated strings (and the array will
** be null-terminated too) resulting from the splitting of the string
** passed as a parameter based on the character c. If the allocation
** fails, the function returns NULL.
*/

#include "libft.h"

char	**ft_split(char const *s, char c);

static int	ft_check_charset(char c, char set)
{
	if (c == set || c == '\0')
		return (1);
	return (0);
}

static int	ft_word_counter(const char *s, char *set)
{
	int	counter;
	char *str;

	counter = 0;
	str = (char *)s;
	while (*str != '\0')
	{
		if (!ft_check_charset(*str, set) && ft_check_charset(*(str + 1), set))
			counter++;
	}
	return (counter);
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

char	**ft_split(char const *s, char c)
{
	char	**strtab;

	strtab = (char **)malloc(sizeof(char *) * ft_word_counter(s, c) + 1);
	while()
}