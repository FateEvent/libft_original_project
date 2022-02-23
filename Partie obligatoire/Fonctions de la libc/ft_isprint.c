/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 22:47:21 by faventur          #+#    #+#             */
/*   Updated: 2022/02/23 11:43:36 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isprint() function checks for any printable character including
** space.
** 
** Return Value: The values returned are nonzero if the character c
** falls into the tested class, and a zero value if not.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	unsigned char	letter;

	letter = (unsigned char)c;
	if (letter < 32 || letter > 126)
		return (0);
	else if (letter >= 65 && letter <= 90)
		return (1);
	else if (letter >= 97 && letter <= 122)
		return (2);
	else if (letter >= 48 && letter <= 57)
		return (4);
	else if ((letter >= 33 && letter <= 47) || (letter >= 58 && letter <= 64)
		|| (letter >= 91 && letter <= 96)
		|| (letter >= 123 && letter <= 126))
		return (16);
	else if (letter == 32)
		return (64);
}
