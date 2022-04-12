#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elem;
	t_list	*next;

	elem = *lst;
	while (elem)
	{
		next = elem->next;
		(*del)(elem->content);
		free(elem);
		elem = next;
	}
	*lst = NULL;
}
