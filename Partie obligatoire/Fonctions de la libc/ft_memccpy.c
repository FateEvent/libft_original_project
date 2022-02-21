/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:01:35 by faventur          #+#    #+#             */
/*   Updated: 2022/01/23 14:01:35 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The memccpy() function copies no more than n bytes from memory area
 * src to memory area dest, stopping when the character c is found.
 * If the memory areas overlap, the results are undefined.
 * 
 * Return Value: The memccpy() function returns a pointer to the next
 * character in dest after c, or NULL if c was not found in the first
 * n characters of src.
 */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	letter;
	char	*s1;
	char	*s2;

	s1 = (char *)src;
	s2 = (char *)dest;
	i = 0;
	letter = (char)c;
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
		if (s1[i - 1] == letter)
		{
			s2[i] = '\0';
			return ((void *)s2);
		}
	}
	return (NULL);
}
