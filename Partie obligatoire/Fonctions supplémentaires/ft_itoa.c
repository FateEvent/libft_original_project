/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:28:54 by faventur          #+#    #+#             */
/*   Updated: 2022/02/25 12:36:43 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_itoa() function allocates (with malloc(3)) and returns
** a "fresh" null-terminated string representing the integer n
** passed as parameter. Negative numbers are to be managed. If
** the allocation fails, the function returns NULL.
*/

#include "libft.h"

static int	len_calculator(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		printf("%d\n", n);
		n /= 10;
		i++;
	}
	printf("i %d\n", i);
	return (i);
}

static char	*ft_rev_str(char *res)
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

static char	*ft_itoa(int n)
{
	int			i;
	long int	x;
	int			len;
	char		*res;

	i = 0;
	x = (long) n;
	len = len_calculator(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (n < 0)
		x = -x;
	while (i < len_calculator(n) && x != 0)
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
