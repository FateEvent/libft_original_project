/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:41:05 by faventur          #+#    #+#             */
/*   Updated: 2022/02/22 14:52:00 by faventur         ###   ########.fr       */
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

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	dest_len;
	char	*s1;
	char	*s2;

	s1 = (char *)src;
	s2 = (char *)dest;
	i = 0;
	dest_len = ft_strlen(s2);
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[dest_len] = '\0';
	return ((void *)s2);
}



int	main()
{
	int len;
	len = sizeof(int) * 4;
	int tab[] = {1, 4, 6, 7};
	int *dest = NULL;
	dest = (int *)malloc(len);
	ft_memcpy(dest, tab, len);
	for(int i = 0; i < 4; i++)
	printf("%d", dest[i]);
}