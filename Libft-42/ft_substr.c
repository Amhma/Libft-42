#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	len_s;

	i = 0;
	len_s = 0;
	while (*(s + len_s))
		len_s++;
	dst = malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (i + start < len_s && i < len)
	{
		*(dst + i) = *(s + i + start);
		i++;
	}
	*(dst + i) = '\0';
	return (dst);
}
