/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:04:30 by faventur          #+#    #+#             */
/*   Updated: 2022/02/06 13:04:30 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_lst_insert() function inserts a list element before another
** element in a list. It allocates (with malloc(3)) and returns a
** "fresh" chain link. The content and content_size fields of the new
** link are initialised by copy of the parameters of the function. If
** the content parameter is missing or null, the content field is set
** to NULL and the content_size field is set to 0 no matter the value
** of the content_size parameter. If the allocation fails, the
** function retuns NULL.
*/

# include "libft.h"

void	ft_lst_insert_link(t_list *first, void const *content, size_t content_size);

void	ft_lst_insert_link(t_list *first, void const *content, size_t content_size)
{
	if (first == NULL)
		return ;
	if (content == NULL || !content)
	{
		t_list	*new_elem = malloc(sizeof(*new_elem));
		if (new_elem == NULL)
			return ;
		first->next = new_elem;
		new_elem->content = NULL;
		new_elem->content_size = 0;
		new_elem->next = NULL;
		return ;
	}
	t_list	*new_elem = malloc(sizeof(*new_elem) * content_size);
	if (new_elem == NULL)
		return ;
	first->next = new_elem;
	new_elem->content = content;
	new_elem->content_size = content_size;
	new_elem->next = NULL;
}