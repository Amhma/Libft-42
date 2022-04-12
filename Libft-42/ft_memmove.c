#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst || !src)
		return (NULL);
	if (src < dst && src + len > dst)
	{
		i = len - 1;
		while (i >= 0 && i < len)
		{
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	return (dst);
}
