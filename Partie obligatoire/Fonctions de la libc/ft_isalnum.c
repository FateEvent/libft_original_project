/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 22:04:31 by faventur          #+#    #+#             */
/*   Updated: 2022/01/30 22:04:31 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The isalnum() function checks whether c, which must have the value
 * of an unsigned char or EOF, is an alphanumeric character; it is
 * equivalent to (isalpha(c) || isdigit(c)).
 * 
 * Return Value: The values returned are nonzero if the character c
 * falls into the tested class, and a zero value if not.
 */

int	ft_isalnum(int c);

int	ft_isalnum(int c)
{
	unsigned char   letter;

	letter = (unsigned char)c;
	if (letter >= 65 && letter <= 90)
		return (1);
	else if (letter >= 97 && letter <= 122)
		return (2);
	else if (letter >= 48 && letter <= 57)
		return (4);
	else
		return (0);
}
