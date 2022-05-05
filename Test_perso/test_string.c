#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<bsd/bsd.h>
#include"libft.h"

int	main(void)
{
	char	b[30];


//	test memset :
	printf("Test memset :\n");
	printf("%s\n",(char *)(memset(b, 49, 29)));
	printf("reinitalisation de la string...\n");	
	bzero(b,29);
	printf("string vide : %s\n", b);
	printf("Test ft_memset :\n");
	printf("%s\n",(char *)(ft_memset(b, 49, 29)));

	printf("\n---------\n\n");


//	test bzero :
	printf("Test bzero :\n");
	bzero(b, 29);
	printf("string vide : %s\n", b);
	printf("remplissage de la string...\n");
	printf("%s\n",(char *)(ft_memset(b, 49, 29)));
	printf("Test ft_bzero :\n");
	ft_bzero(b, 29);
	printf("string vide : %s\n", b);

	printf("\n---------\n\n");

//	test memcpy :
	printf("Test memcpy :\n");
	printf("%s\n",(char *)(memcpy(b, "Coucou comment ca va ?", 23)));
	printf("reinitalisation de la string...\n");	
	ft_bzero(b,30);
	printf("string vide : %s\n", b);
	printf("Test ft_memcpy :\n");
	printf("%s\n",(char *)(ft_memcpy(b, "Coucou comment ca va ?", 22)));

	printf("\n---------\n\n");

//	test memmove :
	char	c[30] = "Comment";
	char	d[30] = "Comment";
	printf("Test memmove vs memcpy :\n");
	printf("memmove : %s\n",(char *)(memmove(c + 2, c, 5)));
//	printf("premiere chaine : %s\n", c);
	printf("memcpy : %s\n",(char *)(memcpy(d + 2, d, 5)));
//	printf("deuxieme chaine : %s\n", d);
	printf("reinitalisation de la string...\n");	
	memcpy(c, "Comment", 8);
	memcpy(d, "Comment", 8);
	printf("Test ft_memmove vs memcpy :\n");
	printf("memmove : %s\n",(char *)(ft_memmove(c + 2, c, 5)));
//	printf("premiere chaine : %s\n", c);
	printf("ft_memcpy : %s\n",(char *)(memcpy(d + 2, d, 5)));
//	printf("deuxieme chaine : %s\n", d);

	printf("\n---------\n\n");

//	test memchr :
	printf("Test memchr :\n");
	printf("%s\n",(char *)(memchr(b, 'm', 23)));
	printf("Test ft_memchr :\n");
	printf("%s\n",(char *)(ft_memchr(b, 'm', 22)));

	printf("\n---------\n\n");

//	test memcmp :
	char *a = "Cucou comment ca va ?";

	printf("Test memcmp :\n");
	printf("%d\n", memcmp(b, a, 22));
	printf("Test ft_memcmp :\n");
	printf("%d\n", ft_memcmp(b, a, 22));

	printf("\n---------\n\n");

//	test strlen :
	printf("Test strlen :\n");
	printf("%lu\n", strlen(b));
	printf("Test ft_strlen :\n");
	printf("%lu\n", ft_strlen(b));

	printf("\n---------\n\n");

//	test strchr :
	printf("Test strchr :\n");
	printf("%s\n",(char *)(strchr(b, 'm')));
	printf("Test ft_strchr :\n");
	printf("%s\n",(char *)(ft_strchr(b, 'm')));

	printf("\n---------\n\n");

//	test strrchr :
	printf("Test strrchr :\n");
	printf("%s\n",(char *)(strrchr(b, 'm')));
	printf("Test ft_strrchr :\n");
	printf("%s\n",(char *)(ft_strrchr(b, 'm')));

	printf("\n---------\n\n");

//	test strrchr :
	printf("Test strrchr :\n");
	printf("%s\n",(char *)(strrchr(b, 'm')));
	printf("Test ft_strrchr :\n");
	printf("%s\n",(char *)(ft_strrchr(b, 'm')));

	printf("\n---------\n\n");

//	test strncmp :
	printf("Test strncmp :\n");
	printf("%d\n", strncmp(b, a, 100));
	printf("Test ft_strncmp :\n");
	printf("%d\n", ft_strncmp(b, a, 100));

	printf("\n---------\n\n");

//	test strlcpy :
	printf("Test strlcpy :\n");
	ft_bzero(b, 29);
	printf("string vide : %s\n", b);
	printf("%lu\n", strlcpy(b, "Coucou comment ca va ?", 5));
	printf("%s\n", b);
	printf("reinitalisation de la string...\n");	
	ft_bzero(b,30);
	printf("string vide : %s\n", b);
	printf("Test ft_strlcpy :\n");
	printf("%lu\n", ft_strlcpy(b, "Coucou comment ca va ?", 5));
	printf("%s\n", b);

	printf("\n---------\n\n");

//	test strlcat :
	a = "ou comment ca va ?";
	printf("Test strlcat :\n");
	printf("%lu\n", strlcat(b, a, 7));
	printf("%s\n", b);
	a = " comment ca va ?";
	printf("Test ft_strlcat :\n");
	printf("%lu\n", ft_strlcat(b, a, 7));
	printf("%s\n", b);

	printf("\n---------\n\n");

//	test strnstr :
	a = "Coucou comment ca va ?";
	printf("Test strnstr :\n");
	printf("%s\n",(char *)(strnstr(a, "ou", 3)));
	printf("Test ft_strnstr :\n");
	printf("%s\n",(char *)(ft_strnstr(a, "ou", 3)));

	printf("\n---------\n\n");

	return(0);
}
