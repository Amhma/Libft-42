#include"libft.h"
#include<stdio.h>
#include<ctype.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("\nDebut des tests...\n\n");

		printf("test isalpha :\n");
		if (isalpha(*av[1]))
			printf("%c est alphabetique\n", *av[1]);
		else
			printf("%c n'est pas alphabetique\n", *av[1]);
		printf("test ft_isalpha :\n");
		if (ft_isalpha(*av[1]))
			printf("%c est alphabetique\n", *av[1]);
		else
			printf("%c n'est pas alphabetique\n", *av[1]);
			
		printf("\n -------- \n\n");

		printf("test isalnum :\n");
		if (isalnum(*av[1]))
			printf("%c est alphabetique ou numerique\n", *av[1]);
		else
			printf("%c n'est pas alphabetique ou numerique\n", *av[1]);
		printf("test ft_isalnum :\n");
		if (ft_isalnum(*av[1]))
			printf("%c est alphabetique ou numerique\n", *av[1]);
		else
			printf("%c n'est pas alphabetique ou numerique\n", *av[1]);
			
		printf("\n -------- \n\n");
			
		printf("test isdigit :\n");
		if (isdigit(*av[1]))
			printf("%c est numerique\n", *av[1]);
		else
			printf("%c n'est pas numerique\n", *av[1]);
		printf("test ft_isdigit :\n");
		if (ft_isdigit(*av[1]))
			printf("%c est numerique\n", *av[1]);
		else
			printf("%c n'est pas numerique\n", *av[1]);
			
		printf("\n -------- \n\n");
			
		printf("test isascii :\n");
		if (isascii(*av[1]))
			printf("%c est un ascii\n", *av[1]);
		else
			printf("%c n'est pas un ascii\n", *av[1]);
		printf("test ft_isscii :\n");
		if (ft_isascii(*av[1]))
			printf("%c est un ascii\n", *av[1]);
		else
			printf("%c n'est pas un ascii\n", *av[1]);
			
		printf("\n -------- \n\n");
			
		printf("test isprint :\n");
		if (isprint(*av[1]))
			printf("%c est printable\n", *av[1]);
		else
			printf("%c n'est pas printable\n", *av[1]);
		printf("test ft_isprint :\n");
		if (ft_isprint(*av[1]))
			printf("%c est printable\n", *av[1]);
		else
			printf("%c n'est pas printable\n", *av[1]);
			
		printf("\n -------- \n\n");
			
		printf("test toupper :\n");
		if (toupper(*av[1]) >= 'A' && toupper(*av[1]) <= 'Z'
			&& *av[1] >= 'a' && *av[1] <= 'z')
			printf("%c est devenu %c\n", *av[1], toupper(*av[1]));
		else
			printf("%c reste inchange %c\n", *av[1], toupper(*av[1]));
		printf("test ft_toupper :\n");
		if (ft_toupper(*av[1]) >= 'A' && ft_toupper(*av[1]) <= 'Z'
			&& *av[1] >= 'a' && *av[1] <= 'z')
			printf("%c est devenu %c\n", *av[1], ft_toupper(*av[1]));
		else
			printf("%c reste inchange %c\n", *av[1], ft_toupper(*av[1]));
			
		printf("\n -------- \n\n");

		printf("test tolower :\n");
		if (tolower(*av[1]) >= 'a' && tolower(*av[1]) <= 'z'
			&& *av[1] >= 'A' && *av[1] <= 'Z')
			printf("%c est devenu %c\n", *av[1], tolower(*av[1]));
		else
			printf("%c reste inchange %c\n", *av[1], tolower(*av[1]));
		printf("test ft_toupper :\n");
		if (ft_tolower(*av[1]) >= 'a' && ft_tolower(*av[1]) <= 'z'
			&& *av[1] >= 'A' && *av[1] <= 'Z')
			printf("%c est devenu %c\n", *av[1], ft_tolower(*av[1]));
		else
			printf("%c reste inchange %c\n", *av[1], ft_tolower(*av[1]));
			
		printf("\nFin des test.\n");
	}
	return (0);
};
