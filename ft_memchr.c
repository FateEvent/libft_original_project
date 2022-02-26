/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:13:11 by faventur          #+#    #+#             */
/*   Updated: 2022/02/23 18:22:28 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memchr() function scans the initial n bytes of the memory area
** pointed to by s for the first instance of c. Both c and the bytes
** of the memory area pointed to by s are interpreted as unsigned char.
** 
** Return Value: The memchr() function returns a pointer to the matching
** byte or NULL if the character does not occur in the given memory area.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	size_t			len;
	size_t			i;

	str = (char *)s;
	len = ft_strlen(str);
	i = 0;
	while (*str++ != '\0' && i++ < n)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
	}
	return (NULL);
}
