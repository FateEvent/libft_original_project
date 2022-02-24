/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:28:54 by faventur          #+#    #+#             */
/*   Updated: 2022/02/24 16:55:41 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_itoa() function allocates (with malloc(3)) and returns
** a "fresh" null-terminated string representing the integer n
** passed as parameter. Negative numbers are to be managed. If
** the allocation fails, the function returns NULL.
*/

#include "libft.h"

int		ft_strlen(char *str);
void	ft_rev_str(char *str);
int		ft_from_n_to_strlen(int n);
char	*ft_itoa(int n);

void	ft_rev_str(char *str)
{
	char	temp;
	int		start;
	int		end;
	int		zero_room;

	start = 0;
	end = ft_strlen(str) - 1;
	zero_room = ft_strlen(str);
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	str[zero_room] = '\0';
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_from_n_to_strlen(int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*s;
	int		s_len;

	i = 0;
	sign = n;
	s = (char *)malloc(sizeof(char) * (s_len + 1));
	if (sign < 0)
		n = -n;
	s_len = ft_from_n_to_strlen(n);
	while (n > 0)
	{
		s[i++] = n % 10 + '0';
		n /= 10;
	}
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	ft_rev_str(s);
	return (s);
}
