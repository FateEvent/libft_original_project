/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:18:18 by faventur          #+#    #+#             */
/*   Updated: 2022/01/31 14:42:08 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The memcpy() function copies n bytes from memory area src to memory
 * area dest. The memory areas must not overlap. Use memmove(3) if the
 * memory areas do overlap.
 * 
 * Return Value: The memcpy() function returns a pointer to dest.
 */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t size);

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char *)src;
	s2 = (char *)dst;
	i = 0;
	while (i < size)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return ((void *)s2);
}
