/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:20:00 by faventur          #+#    #+#             */
/*   Updated: 2022/02/06 11:20:00 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list	*ft_lst_init(void *content, size_t content_size);

t_list	*ft_lst_init(void *content, size_t content_size)
{
	if (content == NULL || !content)
	{
		t_list	*first = malloc(sizeof(*first));
		first->content = NULL;
		first->content_size = 0;
		first->next = NULL;
		return (first);
	}
	t_list	*first = malloc(sizeof(*first) * content_size);
	if (first == NULL)
		return (NULL);
	first->content = content;
	first->content_size = content_size;
	first->next = NULL;
	return (first);
}
