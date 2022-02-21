/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:25:32 by faventur          #+#    #+#             */
/*   Updated: 2022/01/29 14:25:32 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The strchr() function finds the first occurrence of a character in a string.
 * The character c can be the null character (\0); the ending null character
 * of string is included in the search.
 * 
 * Return Value: The strchr() function returns a pointer to the first
 * occurrence of c that is converted to a character in string. The function
 * returns NULL if the specified character is not found.
 */

#include <string.h>

char *ft_strchr(const char *str, int c);

char *ft_strchr(const char *str, int c)
{
	char	letter;

	letter = (char)c;
	while (*str != letter)
	{
		if (!*str)
			return (NULL);
		str++;
	}
	return (str);
}
