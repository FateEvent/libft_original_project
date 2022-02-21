/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:23:13 by faventur          #+#    #+#             */
/*   Updated: 2022/02/02 11:23:13 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strnew function allocates (with malloc(3)) and returns a
** "fresh" null-terminated string. Every character of the string
** is set to '\0'. If the allocation fails, it returns NULL.
*/

#include <stdlib.h>

void	ft_bzero (void *s, size_t n);
char	*ft_strnew(size_t size);

char	*ft_strnew(size_t size)
{
	char	*room;

	room = (char *)malloc (size * sizeof(char *) + 1);
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
