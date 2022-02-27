/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:06:45 by faventur          #+#    #+#             */
/*   Updated: 2022/02/27 17:09:11 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strsub() allocates (with malloc(3)) and returns a "fresh"
** null-terminated copy of the string passed as a parameter. The
** substring starts at the start index and is of length len. If
** start and len don't designate a valid substring, the function
** behaviour is undefined. If the allocation fails, the function
** returns a NULL pointer.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
	{
		substr = (char *)malloc(sizeof(char) * 1);
		substr[0] = '\0';
		return (substr);
	}
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	while (i < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
