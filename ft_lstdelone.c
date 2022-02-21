/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:06:32 by faventur          #+#    #+#             */
/*   Updated: 2022/02/21 15:44:34 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return (NULL);
	del(lst->content);
	free(lst);
}
