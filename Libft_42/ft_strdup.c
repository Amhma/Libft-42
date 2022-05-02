/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:34:30 by amahla            #+#    #+#             */
/*   Updated: 2022/05/02 12:34:33 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;
	size_t	size;

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
