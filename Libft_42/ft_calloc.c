#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;
	size_t	i;

	i = 0;
	dst = malloc(count * size);
	if (!dst)
		return (NULL);
	while (i < count)
		*((unsigned char *)dst + i++) = 0;
	return (dst);
}
