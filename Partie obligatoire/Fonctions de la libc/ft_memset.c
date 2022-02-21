/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 13:10:54 by faventur          #+#    #+#             */
/*   Updated: 2022/01/23 13:10:54 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The memset() function fills the first n bytes of the memory area
 * pointed to by s with the constant byte c.
 * 
 * Return Value: The memset() function returns a pointer to the
 * memory area s.
 */

#include <string.h>

void	ft_memset (char *s, int c, size_t n);
size_t	ft_strlen(const char *str);

void	ft_memset (char *s, int c, size_t n)
{
	size_t	len;
	size_t	i;
	char	*str;
	char	letter;

	str = (char *)s;
	letter = (char)c;
	len = ft_strlen(s);
	i = 0;
	if (n > len)
		return ;
	while (n > 0)
	{
		str[i] = letter;
		i++;
		n--;
	}
	str[i] = '\0';
}

size_t	ft_strlen(const char *str)
{
	size_t	counter;

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
