/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:18:18 by faventur          #+#    #+#             */
/*   Updated: 2022/02/22 14:51:11 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memcpy() function copies n bytes from memory area src to memory
** area dest. The memory areas must not overlap. Use memmove(3) if the
** memory areas do overlap.
** 
** Return Value: The memcpy() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	unsigned char	*s1;

	s1 = (unsigned char *)dst;
	while (size--)
		*s1++ = *(unsigned char *)src++;
	return (dst);
}
