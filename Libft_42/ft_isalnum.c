int	ft_isalnum(int c)
{
	if (!(c >= '0' && c <= '9'))
		if (!(c >= 'A' && c <= 'Z'))
			if (!(c >= 'a' && c <= 'z'))
				return (0);
	return (1);
}
