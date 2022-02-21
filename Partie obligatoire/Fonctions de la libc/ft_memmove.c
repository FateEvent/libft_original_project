/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:41:05 by faventur          #+#    #+#             */
/*   Updated: 2022/01/23 14:41:05 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The memmove() function copies n bytes from memory area src to memory
 * area dest. The memory areas may overlap: copying takes place as though
 * the bytes in src are first copied into a temporary array that does not
 * overlap src or dest, and the bytes are then copied from the temporary
 * array to dest.
 * 
 * Return Value: The memmove() function returns a pointer to dest.
 */

#include <string.h>

size_t	ft_strlen(const char *str);
void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t  destLen;
	char	*s1;
	char	*s2;

	s1 = (char *)src;
	s2 = (char *)dest;
	i = 0;
	destLen = ft_strlen(s2);
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[destLen] = '\0';
	return ((void *)s2);
}

size_t	ft_strlen(const char *str)
{
	size_t  counter;

	counter = 0;
	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
