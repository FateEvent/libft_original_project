/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_var.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:42:55 by faventur          #+#    #+#             */
/*   Updated: 2022/02/23 18:05:47 by faventur         ###   ########.fr       */
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

static char	*ft_strrchr(const char *str, int c)
{
	char	*ret;
	char	letter;
	int		len;

	ret = (char *)str;
	letter = (char)c;
	len = ft_strlen(str);
	if (letter == '\0')
	{
		while (*ret)
			ret++;
		return (ret);
	}
	while (ret[--len])
	{
		if (ret[len] == letter)
			return (&ret[len]);
	}
	return (NULL);
}
