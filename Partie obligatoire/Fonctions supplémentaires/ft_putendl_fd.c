/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:29:35 by faventur          #+#    #+#             */
/*   Updated: 2022/01/25 11:29:35 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *str, int fd);
void    ft_putendl_fd(char const *s, int fd);

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0 && fd <= 2)
		write(fd, &c, 1);
	else
		return ;
}

void	ft_putstr_fd(char const *str, int fd)
{
	if (fd < 0 || fd > 2)
		return ;
	else
	{
		while (*str != '\0')
		{
			ft_putchar_fd(*str, fd);
			str++;
		}
	}
}

void	ft_putendl_fd(char const *s, int fd)
{
	if (fd < 0 || fd > 2)
		return ;
	else
	{
		ft_putstr_fd(s, fd);
		write(fd, "\n", 1);
	}
}
