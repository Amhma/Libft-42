#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*elem;

	elem = *lst;
	if (!*lst)
		*lst = new;
	else
	{
		while (elem->next)
			elem = elem->next;
		elem->next = new;
	}
}
