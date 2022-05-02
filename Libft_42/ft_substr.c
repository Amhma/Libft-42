/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:37:15 by amahla            #+#    #+#             */
/*   Updated: 2022/05/02 12:37:16 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	len_s;

	i = 0;
	len_s = 0;
	while (s && *(s + len_s))
		len_s++;
	if (len > len_s)
		len = len_s;
	dst = malloc((len + 1) * sizeof(char));
	if (!s && !dst)
		return (NULL);
	while (i + start < len_s && i < len)
	{
		*(dst + i) = *(s + i + start);
		i++;
	}
	*(dst + i) = '\0';
	return (dst);
}
