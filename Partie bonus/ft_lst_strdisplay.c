/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_strdisplay.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:45:57 by faventur          #+#    #+#             */
/*   Updated: 2022/02/27 19:43:34 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_lst_strdisplay(t_list *first)
{
	t_list	*current;

	current = first;
	if (!first || !current)
		return ;
	while (current != NULL)
	{
		ft_putstr(current->content);
		ft_putchar('\n');
		current = current->next;
	}
	ft_putstr("NULL\n");
}
