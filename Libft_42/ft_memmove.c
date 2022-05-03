/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:32:15 by amahla            #+#    #+#             */
/*   Updated: 2022/05/03 09:57:42 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	if (src < dest && src + len > dest)
	{
		i = len - 1;
		while (i >= 0 && i < len)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	return (dest);
}
