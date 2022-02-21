/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:04:22 by faventur          #+#    #+#             */
/*   Updated: 2022/02/06 13:04:22 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_lstnew() function adds a new list element to a list. It
** allocates (with malloc(3)) and returns a "fresh" chain link. The
** content and content_size fields of the new link are initialised
** by copy of the parameters of the function. If the content parameter
** is missing, the content field is set to NULL and the content_size
** field is set to 0 no matter the value of the content_size parameter.
** If the allocation fails, the function retuns NULL.
**
** Return Value: The new chain link.
*/

# include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size);

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new = malloc(sizeof(*new));
	if (new == NULL)
		return ;
	if (content == NULL || !content)
	{
		new->content = NULL;
		new->content_size = 0;
		new->next = NULL;
		return (new);
	}
	new->content = content;
	new->content_size = content_size;
	new->next = NULL;
	return (new);
}
