/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:41:05 by faventur          #+#    #+#             */
/*   Updated: 2022/02/23 11:26:10 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memmove() function copies n bytes from memory area src to memory
** area dest. The memory areas may overlap: copying takes place as though
** the bytes in src are first copied into a temporary array that does not
** overlap src or dest, and the bytes are then copied from the temporary
** array to dest.
** 
** Return Value: The memmove() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src > dst)
	{
		while (n--)
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	}
	else
	{
		while (i++ < n)
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	}
	return (dst);
}