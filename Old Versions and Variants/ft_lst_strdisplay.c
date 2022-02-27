/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_strdisplay.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:45:57 by faventur          #+#    #+#             */
/*   Updated: 2022/02/27 20:08:20 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_strdisplay(t_list *first)
{
	t_list	*current;

	current = first;
	if (!first || !current)
		return ;
	while (current != NULL)
	{
		ft_putendl(current->content);
		current = current->next;
	}
	ft_putstr("NULL\n");
}
