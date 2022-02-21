#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		counter;

	current = lst;
	counter = 0;
	if (lst == NULL || current == NULL)
		return (-1);
	while (current != NULL)
	{
		counter++;
		write(1, "1a", 2);
		current = current->next;
	}
	return (counter);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (lst == NULL || current == NULL)
		return (NULL);
	while (current->next != NULL)
		current = current->next;
	return (current);
}

int	main(void)
{
	t_list	fab;
	t_list	seb;
	t_list	gab;
	t_list	*tom;
	t_list	drop;

	fab.content = NULL;
	seb.content = NULL;
	gab.content = NULL;
	drop.next = NULL;
	fab.next = &seb;
	seb.next = &gab;
	gab.next = NULL;
	tom = ft_lstlast(&fab);
	int i = ft_lstsize(&fab);
	printf("%d", i);
	tom->next = &drop;
	i = ft_lstsize(&fab);
	printf("%d", i);
}