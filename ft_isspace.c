/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:36:49 by faventur          #+#    #+#             */
/*   Updated: 2022/01/30 21:36:49 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The isspace() function checks whether c, which must have the value
 * of an unsigned char or EOF, is a white-space character. In the "C"
 * and "POSIX" locales, these are: space, form-feed ('\f'), newline
 * ('\n'), carriage return ('\r'), horizontal tab ('\t'), vertical
 * tab ('\v').
 * 
 * Return Value: The values returned are nonzero if the character c
 * falls into the tested class, and a zero value if not.
 */

int	ft_isspace(int c);

int ft_isspace(int c)
{
	unsigned char	letter;

	letter = (unsigned char)c;
	if (letter == ' ' || letter == '\n' || letter == '\t'
			|| letter == '\r' || letter == '\v' || letter == '\f')
		return (8);
	else
		return (0);
}
