/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:11:19 by faventur          #+#    #+#             */
/*   Updated: 2022/01/30 23:11:19 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The tolower() function converts the letter c to lower case, if
 * possible.
 * 
 * If c is not an unsigned char value, or EOF, the behavior of this
 * function is undefined.
 * 
 * Return Value: The value returned is that of the converted letter,
 * or c if the conversion was not possible.
 */

int ft_tolower(int c);

int ft_tolower(int c)
{
	unsigned char	letter;

	letter = (unsigned char)c;
	if (letter >= 'A' && letter <= 'Z')
	{
		letter += 32;
		return ((int)letter);
	}
	else
		return (c);
}