#include"libft.h"
#include<stdio.h>

void	test(void *s)
{
	printf("Fonction printf : - %s -\n", (char *)s);;
}

void	ft_put_str(char *str)
{
	int	i = 0;

	while (*(str + i++))
		write(1, str + i, 1);
	write(1, "\n", 1);
}

/*int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while ((*(s1 + i) || *(s2 + i)) && i < n)
    {
        if (*(s1 + i) != *(s2 + i))
            return (*(s1 + i) - *(s2 + i));
        i++;
    }
    return (0);
}

size_t  ft_strlen(const char *s) 
{
    size_t  i;  

    i = 0;
    while (*(s + i)) 
        i++;
    return (i);
}

char *ft_strdup(const char *s1)
{
    char    *dst;
    size_t  i;  
    size_t  size;

    i = 0;
    size = 0;
    while (*(s1 + i++))
        size++;
    dst = malloc((size + 1) * sizeof(char));
    if (!dst)
        return (NULL);
	i = 0;
    while (i < size)
    {   
        *(dst + i) = *(s1 + i); 
        i++;
    }   
    *(dst + i) = '\0';
    return (dst);
}
*/
void *ft_strdup2(void *str)
{
    char    *dst;
	char	*s1;
    size_t  i;  
    size_t  size;

	s1 = (char *)str;
    i = 0;
    size = 0;
    while (*(s1 + i++))
        size++;
    dst = malloc((size + 1) * sizeof(char));
    if (!dst)
        return (NULL);
i = 0;
    while (i < size)
    {   
        *(dst + i) = *(s1 + i); 
        i++;
    }   
    *(dst + i) = '\0';
	return ((void *)dst);
}

int	main(void)
{
	t_list	*begin_lst;
	t_list	*elem;

	printf("\n\nDebut des tests.\n\n");

	printf("test ft_lstnew\n");
	begin_lst = ft_lstnew(ft_strdup("!?"));
	if (!begin_lst)
	{
		printf("echec...");
		return (0);
	}
	else
		printf("Success ! Voici le premier elem de la list : - %s -\n", (char *)(begin_lst->content));

	printf("\n ------ \n\n");
	
	printf("test ft_lstadd_front & ft_lstsize\n");
	ft_lstadd_front(&begin_lst, ft_lstnew(ft_strdup("bien")));
	ft_lstadd_front(&begin_lst, ft_lstnew(ft_strdup("vas")));
	ft_lstadd_front(&begin_lst, ft_lstnew(ft_strdup("tu")));
	ft_lstadd_front(&begin_lst, ft_lstnew(ft_strdup("Salut,")));
	if (ft_lstsize(begin_lst) == 5)
	{
		printf("Success ! il y a %d elements dans la liste.\n", ft_lstsize(begin_lst));
		printf("Voici la liste (sous reserve du bon ordre...) :\n\n");
		elem = begin_lst;
		while (elem)
		{
			printf("%s\n", (char *)(elem->content));
			elem = elem->next;
		}
	}
	else
	{
		printf("echec..\n.");
		printf("il y a %d element dans la liste et voici la liste :\n\n", ft_lstsize(begin_lst));
		elem = begin_lst;
		while (elem)
		{
			printf("%s\n", (char *)(elem->content));
			elem = elem->next;
		}
		return (0);
	}
	
	printf("\n ------ \n\n");
	
	printf("test ft_lstlast\n");
	elem = ft_lstlast(begin_lst);
	if (!elem || ft_strncmp("!?", (char const *)(elem->content), 2) != 0)
	{
		printf("echec..");
		return (0);
	}
	else
		printf("Success ! le dernier element est bien : - %s -\n", (char *)(elem->content));
	
	printf("\n ------ \n\n");
	
	printf("test ft_lstadd_back\n");
	ft_lstadd_back(&begin_lst, ft_lstnew(ft_strdup("Oups")));
	ft_lstadd_back(&begin_lst, ft_lstnew(ft_strdup("j'ai")));
	ft_lstadd_back(&begin_lst, ft_lstnew(ft_strdup("rajoute")));
	ft_lstadd_back(&begin_lst, ft_lstnew(ft_strdup("une phrase...")));
	if (ft_lstsize(begin_lst) == 9)
	{
		printf("Success ! il y a %d elements dans la liste.\n", ft_lstsize(begin_lst));
		printf("Voici la liste (sous reserve du bon ordre...) :\n\n");
		elem = begin_lst;
		while (elem)
		{
			printf("%s\n", (char *)(elem->content));
			elem = elem->next;
		}
	}
	else
	{
		printf("echec..\n.");
		printf("il y a %d element dans la liste et voici la liste :\n\n", ft_lstsize(begin_lst));
		elem = begin_lst;
		while (elem)
		{
			printf("%s\n", (char *)(elem->content));
			elem = elem->next;
		}
		return (0);
	}
	
	printf("\n ------ \n\n");

	printf("test ft_lstdelone\n");
	ft_lstdelone(ft_lstnew(ft_strdup("Yoo")), &free);
	printf("Pas de message d'erreur... Success !!");

	printf("\n ------ \n\n");

	printf("test ft_lstclear\n");
	elem = begin_lst;
	t_list	*prev;
	while (elem)
	{
		if (ft_strncmp("Oups", (char const *)(elem->content), 4) == 0)
		{
			ft_lstclear(&elem, &free);
			if (prev)
				prev->next = NULL;
			break ;
		}
		prev = elem;
		elem = elem->next;
	}
	if (ft_lstsize(begin_lst) == 5)
	{
		printf("Success ! il y a %d elements dans la liste.\n", ft_lstsize(begin_lst));
		printf("Voici la liste (sous reserve du bon ordre...) :\n\n");
		elem = begin_lst;
		while (elem)
		{
			printf("%s\n", (char *)(elem->content));
			elem = elem->next;
		}
	}
	else
	{
		printf("echec..\n.");
		printf("il y a %d element dans la liste et voici la liste :\n\n", ft_lstsize(begin_lst));
		elem = begin_lst;
		while (elem)
		{
			printf("%s\n", (char *)(elem->content));
			elem = elem->next;
		}
		return (0);
	}
	
	printf("\n ------ \n\n");

	printf("test ft_lstiter\n\n");
	
	elem = begin_lst;
	ft_lstiter(elem, &test);
	
	printf("\n ------ \n\n");

	printf("test ft_lstmapi\n");

	t_list	*begin_list2;
	begin_list2 = NULL;
	begin_list2 = ft_lstmap(begin_lst, &ft_strdup2, &free);
	elem = begin_list2;
	printf("Voici la copie de la premiere liste :\n\n");
	while (elem)
	{
		printf("%s\n", (char *)(elem->content));
		elem = elem->next;
	}
	
	ft_lstclear(&begin_lst, &free);
	ft_lstclear(&begin_list2, &free);
	printf("\n\nFin des tests.\n\n");

	return (0);
}

