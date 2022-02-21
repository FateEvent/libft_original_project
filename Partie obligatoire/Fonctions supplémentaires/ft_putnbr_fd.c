/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:35:34 by faventur          #+#    #+#             */
/*   Updated: 2022/01/25 10:35:34 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putnbr(int nb, int fd);

void	ft_putnbr(int nb, int fd)
{
	if (fd < 0 || fd > 2)
		return ;
	else
	{
		if (nb == -2147483648)
			write(fd, "-2147483648", 11);
		else
		{
			if (nb < 0)
			{
				nb = -nb;
				write(fd, "-", 1);
			}
			if (nb >= 10)
			{
				ft_putnbr(nb / 10, fd);
				ft_putnbr(nb % 10, fd);
			}
			else
				ft_putchar_fd(nb + '0', fd);
		}
	}
}

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0 && fd <= 2)
		write(fd, &c, 1);
	else
		return ;
}
