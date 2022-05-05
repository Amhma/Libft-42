#include"libft.h"
#include<stdio.h>
#include<limits.h>

char	testmap(unsigned int n, char c)
{
	return (c - n);
}

void	testiteri(unsigned int n, char *s)
{
	printf("Voici le reste de la chaine a l'index %u : %s\n", n, s);
}

int	main(void)
{
	printf("Debut des tests...\n\n");

	printf("test ft_putchar_fd\n");
	ft_putchar_fd('C', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('C', 2);
	ft_putchar_fd('\n', 2);
	ft_putchar_fd('\n', 2);

	printf("\n ------- \n\n");

	printf("test ft_putstr_fd\n");
	ft_putstr_fd("Ca marche !\n", 1);
	ft_putstr_fd("Ca marche sur la sortie erreur aussi !!\n", 2);

	printf("\n ------- \n\n");

	printf("test ft_putendl_fd\n");
	ft_putendl_fd("Ca marche ! ('\\n' compris, le grand luxe !!) !", 1);
	ft_putendl_fd("Ca marche sur la sortie erreur aussi !! ('\\n' compris, le grand luxe !!)", 2);

	printf("\n ------- \n\n");

	printf("test ft_putnbr_fd\n");
	ft_putnbr_fd(INT_MAX, 1);
	ft_putchar_fd('\n', 1);	
	ft_putnbr_fd(18732, 2);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(1, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(0, 2);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-1, 2);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-22340, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(INT_MIN, 2);
	ft_putchar_fd('\n', 1);

	printf("\n ------- \n\n");

	printf("test ft_itoa\n");
	char	*itoa;
	itoa = ft_itoa(INT_MAX);
	printf("%s\n", itoa);
	free(itoa);
	itoa = ft_itoa(18732);
	printf("%s\n", itoa);
	free(itoa);
	itoa = ft_itoa(1);
	printf("%s\n", itoa);
	free(itoa);
	itoa = ft_itoa(0);
	printf("%s\n", itoa);
	free(itoa);
	itoa = ft_itoa(-0);
	printf("%s\n", itoa);
	free(itoa);
	itoa = ft_itoa(-1);
	printf("%s\n", itoa);
	free(itoa);
	itoa = ft_itoa(-22340);
	printf("%s\n", itoa);
	free(itoa);
	itoa = ft_itoa(INT_MIN);
	printf("%s\n", itoa);
	free(itoa);

	printf("\n ------- \n\n");

	printf("test ft_substr\n");
	char *strsub;
	strsub = ft_substr("jqweifniu234234/.,;' \nVoici la chaine a garderuidq", 22, 24);
	printf("%s\n", strsub);
	free(strsub);
	strsub = ft_substr("jqweifniu234234/.,;' \nchaine tronque...", 22, 24);
	printf("%s\n", strsub);
	free(strsub);

	printf("\n ------- \n\n");

	printf("test ft_strtrim\n");
	printf("Voici la chaine non-trimee : --- ;; ,.,.,  Yo, bien; ou. quoi----,.  ;;;---  \n");
	strsub = ft_strtrim("--- ;; ,.,.,  Yo, bien; ou. quoi----,.  ;;;---  ", "- .,;");
	printf("Voici la chaine trimee : %s\n", strsub);
	free(strsub);

	printf("\n ------- \n\n");

	printf("test ft_split\n");
	char 	**split;
	int		y;

	y = 0;
	split = ft_split("   Coucou    comment    vas   tu  ?!   ", 'c');
	while (split[y])
		printf("%s\n", split[y++]);
	while (y >= 0)
		free(split[y--]);
	free(split);
	printf("\n");

	y = 0;
	split = ft_split("", ' ');
	while (split[y])
		printf("%s\n", split[y++]);
	while (y >= 0)
		free(split[y--]);
	free(split);
	printf("\n");

	printf("\n ------- \n\n");

	printf("test ft_strmapi\n");
	char	*strmap;
	strmap = ft_strmapi("0123456789", &testmap);
	printf("%s\n", strmap);
	free(strmap);

	printf("\n ------- \n\n");

	printf("test ft_striteri\n");
	ft_striteri("Yo bien ou quoi", &testiteri);

	printf("\n\nFin de tests.\n");
	return (0);
}
