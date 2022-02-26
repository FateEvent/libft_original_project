/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 22:04:27 by faventur          #+#    #+#             */
/*   Updated: 2022/02/26 13:02:41 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isascii() function checks whether c is a 7-bit unsigned char
** value that fits into the ASCII character set.
** 
** Return Value: The values returned are nonzero if the character c
** falls into the tested class, and a zero value if not.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if ((unsigned char)c >= 0 && (unsigned char)c <= 127)
		return (1);
	else
		return (0);
}
