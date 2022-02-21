/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:42:55 by faventur          #+#    #+#             */
/*   Updated: 2022/01/29 14:42:55 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The strrchr() function finds the last occurrence of c (converted to a
 * character) in string. The ending null character is considered part of the
 * string.
 * 
 * Return Value: The strrchr() function returns a pointer to the last
 * occurrence of c in string. If the given character is not found, a NULL
 * pointer is returned.
 */

#include <string.h>

size_t	ft_strlen(const char *str);
char *ft_strrchr(const char *str, int c);

char *ft_strrchr(const char *str, int c)
{
	char	letter;
	char	*ret;

	letter = (char)c;
	ret = NULL;
	if (letter == '\0')
	{
		while(*str)
			str++;
		return str;
	}
	while (*str)
	{
		if (*str == letter)
		{
			ret = str;
			str++;
		}
		else
			str++;
	}
	return (ret);
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
