#include"libft.h"

static size_t	slen(char const *str)
{
	size_t	i;

	i = 0;
	while (str && *(str + i))
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dst;

	i = 0;
	if (!s || !f)
		return (NULL);
	dst = malloc((slen(s) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (s[i])
	{
		dst[i] = (*f)(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
