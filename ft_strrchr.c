/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:42:55 by faventur          #+#    #+#             */
/*   Updated: 2022/02/26 13:32:04 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strrchr() function finds the last occurrence of c (converted to a
** character) in string. The ending null character is considered part of the
** string.
** 
** Return Value: The strrchr() function returns a pointer to the last
** occurrence of c in string. If the given character is not found, a NULL
** pointer is returned.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ret;

	ret = (char *)str;
	if ((char)c == '\0')
	{
		while (*str)
			str++;
		return ((char *)str);
	}
	while (*str)
	{
		if (*str == (char)c)
		{
			ret = (char *)str;
			str++;
		}
		else
			str++;
	}
	return (ret);
}
