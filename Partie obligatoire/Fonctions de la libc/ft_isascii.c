/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 22:04:27 by faventur          #+#    #+#             */
/*   Updated: 2022/01/30 22:04:27 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The isascii() function checks whether c is a 7-bit unsigned char
 * value that fits into the ASCII character set.
 * 
 * Return Value: The values returned are nonzero if the character c
 * falls into the tested class, and a zero value if not.
 */

int ft_isascii(int c);

int ft_isascii(int c)
{
	unsigned char	letter;

	letter = (unsigned char)c;
	if (letter >= 0 && letter <= 127)
		return (1);
	else
		return (0);
}
