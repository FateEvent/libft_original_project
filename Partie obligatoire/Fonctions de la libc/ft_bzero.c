/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:15:27 by faventur          #+#    #+#             */
/*   Updated: 2022/01/23 12:15:27 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The bzero() function sets the first n bytes of the area starting
 * at s to zero.
 */

#include <string.h>

void    ft_bzero (void *s, size_t n);
size_t	ft_strlen(const char *str);

void ft_bzero (void *s, size_t n)
{
	size_t	len;
	size_t	i;
	char	*str;

	str = (char *)s;
	len = ft_strlen(str);
	i = 0;
	if (n > len)
		return ;
	while (n > 0)
	{
		str[i] = '\0';
		i++;
		n--;
	}
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
