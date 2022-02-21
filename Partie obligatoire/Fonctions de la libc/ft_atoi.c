/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fab's Version.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:54:51 by faventur          #+#    #+#             */
/*   Updated: 2022/01/30 20:54:51 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The atoi() function converts the initial portion of the string
 * pointed to by nptr to int.
 * 
 * Return Value: The converted value.
 */

int	ft_atoi(const char *nptr);

int	ft_atoi(const char *nptr)
{
	int	i;
	int	counter;
	int res;

	i = 0;
	counter = 0;
	res = 0;
	while (nptr[i] && nptr[i] == ' ')
		i++;
	if (nptr[i] && nptr[i] == '-')
	{
		counter++;
		i++;
	}
	if (nptr[i] && nptr[i] == '+')
		i++;
	while ((nptr[i] >= '0' && nptr[i] <= '9') && nptr[i])
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	if (counter == 1)
		res *= -1;
	return (res);
}
