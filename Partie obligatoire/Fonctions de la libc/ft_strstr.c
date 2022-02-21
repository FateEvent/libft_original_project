/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:00:52 by faventur          #+#    #+#             */
/*   Updated: 2022/01/23 16:00:52 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The strstr() function finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes are not
 * compared.
 * 
 * Return Value: This function returns a pointer to the beginning of
 * the substring, or NULL if the substring is not found.
 */

#include <string.h>

size_t	ft_strlen(const char *str);
char	*ft_strstr(const char *haystack, const char *needle);

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	str_len;
	size_t	find_len;
	size_t	i;
	size_t	j;

	str_len = ft_strlen(haystack);
	find_len = ft_strlen(needle);
	i = 0;
	if (str_len < find_len)
		return (NULL);
	while (i <= str_len - find_len)
	{
		j = 0;
		while (j < find_len)
		{
			if (haystack[i + j] != needle[j])
				break ;
			j++;
		}
		if (j == find_len)
			return (&haystack[i]);
		i++;
	}
	return (NULL);
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
