/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:01:35 by faventur          #+#    #+#             */
/*   Updated: 2022/02/23 12:37:47 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memccpy() function copies no more than n bytes from memory area
** src to memory area dest, stopping when the character c is found.
** If the memory areas overlap, the results are undefined.
** 
** Return Value: The memccpy() function returns a pointer to the next
** character in dest after c, or NULL if c was not found in the first
** n characters of src.
*/

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	symbol;
	size_t			i;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dest;
	symbol = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
		if (s1[i] == symbol)
			return (dest);
	}
	return (NULL);
}
