/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:02:26 by faventur          #+#    #+#             */
/*   Updated: 2022/01/23 16:02:26 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The strcmp() function compares the two strings s1 and s2. It returns
 * an integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 * 
 * The strncmp() function is similar, except it only compares the first
 * (at most) n bytes of s1 and s2.
 * 
 * Return Value: The strcmp() function returns an integer less than,
 * equal to, or greater than zero if s1 is found, respectively, to be
 * less than, to match, or be greater than s2.
 */

int ft_strcmp(const char *s1, const char *s2);

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] == '\0')
		return (s1[i]);
	if (s1[i] == '\0')
		return (-s2[i]);
	return (0);
}
