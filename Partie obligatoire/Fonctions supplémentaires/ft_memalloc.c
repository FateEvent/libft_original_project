/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:05:29 by faventur          #+#    #+#             */
/*   Updated: 2022/01/31 14:05:29 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_memalloc() function allocates (with malloc(3)) and returns a
** "fresh" zone of memory. The allocated memory is set to 0.
** If the allocation fails, a NULL pointer is returned.
** 
** Return Value: The function returns the allocated zone of memory.
*/

#include <stdlib.h>

size_t	ft_strlen(const char *str);
void	ft_bzero (void *s, size_t n);
void	*ft_memalloc(size_t size);

void	*ft_memalloc(size_t size)
{
	void	*room;

	room = malloc (size * sizeof(void *) + 1);
	if (room == NULL)
		return (NULL);
	ft_bzero(room, size + 1);
	return (room);
}

void	ft_bzero (void *s, size_t n)
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
