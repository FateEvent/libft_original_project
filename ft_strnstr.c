/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:29:35 by faventur          #+#    #+#             */
/*   Updated: 2022/02/27 12:11:12 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strnstr() function locates the first occurrence of the null-terminated
** string needle in the	string haystack, where no more than	len characters
** are searched.
** 
** Return Value: If	needle is an empty string, haystack is returned; if
** needle occurs nowhere in	haystack, NULL is returned; otherwise a pointer
** to the first	character of the first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	src_len;
	size_t	find_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(haystack);
	find_len = ft_strlen(needle);
	i = 0;
	if (src_len < find_len || len < find_len)
		return (NULL);
	while (i <= src_len - find_len && len--)
	{
		j = 0;
		while (j < find_len)
		{
			if (*(char *)(haystack + i + j) != *(char *)(needle + j))
				break ;
			j++;
		}
		if (j == find_len)
			return (&*(char *)(haystack + i));
		i++;
	}
	return (NULL);
}
