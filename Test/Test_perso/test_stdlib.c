#include"libft.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int	main(void)
{
	printf("Debut des tests...\n\n");

	printf("test atoi\n");
	printf("%d\n", atoi(""));
	printf("%d\n", atoi("\n\t\v\f\r  "));
	printf("%d\n", atoi("\n\t\v\f\r  qwe"));
	printf("%d\n", atoi("++--"));
	printf("%d\n", atoi("\n\t\v\f\r   +532"));
	printf("%d\n", atoi("\n\t\v\f\r   --2147483648"));
	printf("%d\n", atoi("\n\t\v\f\r   +-2147483648"));
	printf("%d\n", atoi("\n\t\v\f\r   -2147483648"));
	printf("%d\n", atoi("\n\t\v\f\r   \r2147483647"));
	printf("%d\n", atoi("\n\t\v\f\r   2147483647"));
	printf("%d\n", atoi("\n\t\v\f\r   0"));
	printf("%d\n", atoi("\n\t\v\f\r   0jiwoq"));
	printf("%d\n", atoi("\n\t\v\f\r   653ewd22"));
	printf("\ntest ft_atoi\n");
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("\n\t\v\f\r  "));
	printf("%d\n", ft_atoi("\n\t\v\f\r  qwe"));
	printf("%d\n", ft_atoi("++--"));
	printf("%d\n", ft_atoi("\n\t\v\f\r   +532"));
	printf("%d\n", ft_atoi("\n\t\v\f\r   --2147483648"));
	printf("%d\n", ft_atoi("\n\t\v\f\r   +-2147483648"));
	printf("%d\n", ft_atoi("\n\t\v\f\r   -2147483648"));
	printf("%d\n", ft_atoi("\n\t\v\f\r   \r2147483647"));
	printf("%d\n", ft_atoi("\n\t\v\f\r   2147483647"));
	printf("%d\n", ft_atoi("\n\t\v\f\r   0"));
	printf("%d\n", ft_atoi("\n\t\v\f\r   0jiwoq"));
	printf("%d\n", ft_atoi("\n\t\v\f\r   653ewd22"));

	printf("\n -------\n\n");

	printf("test calloc\n");
	char *dst1;
	char *dst2;
	dst1 = calloc(35, sizeof(unsigned char));
	dst2 = ft_calloc(35, sizeof(unsigned char));
	if (dst1 && *dst1 == 0 && dst1[20] == 0 && dst1[35] == 0)
		printf("La chaine est bien allouee et initialisee a zero\n");
	else
		printf("echec de l'allocation\n");
	printf("\ntest ft_calloc\n");
	if (dst2 && *dst2 == 0 && dst2[20] == 0 && dst2[35] == 0)
		printf("La chaine est bien allouee et initialisee a zero\n");
	else
		printf("echec de l'allocation\n");
	free(dst1);
	free(dst2);

	printf("\n -------\n\n");

	dst1 = strdup("Coucou comment tu vas !?\n");
	dst2 = ft_strdup("Coucou comment tu vas !?\n");
	printf("test strdup\n");
	if (!dst1)
		printf("Echec\n");
	else
		printf("%s\n", dst1);
	printf("test ft_strdup\n");
	if (!dst2)
		printf("Echec\n");
	else
		printf("%s\n", dst1);
	free(dst1);
	free(dst2);

	printf("\nFin des tests.\n");
	return (0);
}
