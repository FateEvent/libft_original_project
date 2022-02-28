/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:52:37 by faventur          #+#    #+#             */
/*   Updated: 2022/02/28 14:20:47 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_lstadd_back() function adds the new element at the end of
** the list passed as a parameter.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = ft_lstlast(*lst);
	if (current == NULL || lst == NULL || *lst == NULL)
		return ;
	current->next = new;
	new->next = NULL;
}
