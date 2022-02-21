/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:04:15 by faventur          #+#    #+#             */
/*   Updated: 2022/02/06 13:04:15 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_lstdelone() takes as a parameter the address of a pointer on
** a chain link and frees the memory from the content of that link with
** the function passed as parameter, before freeing the memory of the
** link with free(3). As a last step, the pointer on the link which has
** been freed has to be set to NULL (in the same way as the ft_memdel()
** function does).
*/

# include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == NULL)
		return ;
	del(alst->content, alst->content_size);
	free(alst);
	alst->next = NULL;
}
