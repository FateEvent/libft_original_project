/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:23:31 by faventur          #+#    #+#             */
/*   Updated: 2022/01/31 14:23:31 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_memdel() function takes as a parameter the address of a pointer
** whose pointed zone must be freed avec free(3), then the pointer is
** set to NULL.
*/

#include <stdlib.h>

void	ft_memdel(void **ap);

void	ft_memdel(char **ap)
{
	if (ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}
