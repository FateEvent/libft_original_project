/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:11:28 by faventur          #+#    #+#             */
/*   Updated: 2022/02/23 11:47:42 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The toupper() function converts the letter c to upper case, if
** possible.
** 
** If c is not an unsigned char value, or EOF, the behavior of this
** function is undefined.
** 
** Return Value: The value returned is that of the converted letter,
** or c if the conversion was not possible.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	letter;

	letter = (unsigned char)c;
	if (letter >= 'a' && letter <= 'z')
	{
		letter -= 32;
		return ((int)letter);
	}
	else
		return (c);
}
