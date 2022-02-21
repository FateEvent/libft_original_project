/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_del.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:01:14 by faventur          #+#    #+#             */
/*   Updated: 2022/02/06 14:01:14 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void ft_lst_del(t_list *first)
{
	if (first == NULL)
		return ;
	if (first->next != NULL)
	{
		t_list *element_to_delete = first->next;
		first->next = first->next->next;
		free(element_to_delete);
	}
}
