/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:28:54 by faventur          #+#    #+#             */
/*   Updated: 2022/02/24 19:02:26 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_itoa() function allocates (with malloc(3)) and returns
** a "fresh" null-terminated string representing the integer n
** passed as parameter. Negative numbers are to be managed. If
** the allocation fails, the function returns NULL.
*/

#include "libft.h"

int	len_calculator(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n *= -1;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_rev_str(char *res)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = ft_strlen(res) - 1;
	while (start < end)
	{
		temp = res[start];
		res[start] = res[end];
		res[end] = temp;
		start++;
		end--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		x;

	res = (char *)malloc(sizeof(char) * (len_calculator(n) + 1));
	i = 0;
	x = n;
	if (n < 0)
		x = -x;
	while (i < len_calculator(n))
	{
		res[i++] = 48 + (x % 10);
		x /= 10;
	}
	if (n < 0)
		res[i++] = '-';
	res[i] = '\0';
	ft_rev_str(res);
	return (res);
}
