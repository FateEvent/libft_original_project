/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:45:34 by faventur          #+#    #+#             */
/*   Updated: 2022/01/24 10:45:34 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The strlcat() function concatenates strings. It is designed to be a safer, more consistent, and less
 * error prone replacement for strncat(3). Unlike that function, strlcat() takes the full size of the
 * buffer (not just the length) and guarantees to NUL-terminate the result (as long as there is at least
 * one byte free in dst). Note that a byte for the NUL should be included in size. Also note tat strlcat()
 * only operates on true "C" strings. This means that both src and dst must be NUL-terminated.
 * 
 * The strlcat() function appends the NUL-terminated string src to the end of dst. It will append at most
 * size - strlen(dst) - 1 bytes, NUL-terminating the result.
 * 
 * Return Values: The strlcat() function returns the total length of the string it tried to create. That
 * means the initial length of dst plus the length of src. It was done to make truncation detection simple.
 * 
 * Note, however, that if strlcat() traverses size characters without finding a NUL, the length of the
 * string is considered to be size and the destination string will not be NUL-terminated (since there was
 * no space for the NUL). This keeps strlcat() from running off the end of a string. In practice this
 * should not happen (as it means that either size is incorrect or that dst is not a proper "C" string).
 * The check exists to prevent potential security problems in incorrect code.
 */

#include <string.h>

size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dest);
	if (size < 0)
		return (0);
	while ((i < size - 1 && src[i] != '\0') && size != 0)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (ft_strlen(dest));
}

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
