/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:13:31 by faventur          #+#    #+#             */
/*   Updated: 2022/02/23 18:13:47 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strncmp() function is similar to the strcmp() function, except it
** only compares the first (at most) n bytes of s1 and s2.
** 
** Return Value: The strncmp() function returns an integer less than,
** equal to, or greater than zero if the first n bytes of s1 are found,
** respectively, to be less than, to match, or be greater than s2.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((s2[i] == '\0' && s1[i] == '\0') || n == 0)
		return (0);
	n--;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
