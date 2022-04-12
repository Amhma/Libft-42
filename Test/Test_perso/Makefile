NAME1	= test_string
NAME2	= test_other
NAME3	= test_ctype
NAME4	= test_stdlib
NAME5	= test_bonus
CC		= clang
CFLAGS	= -Wall -Werror -Wextra
SRC		= test_ctype.c	test_other.c	test_stdlib.c test_string.c
SRC_BS	= test_bonus.c
OBJ		= $(SRC:.c=.o)
OBJ_BS	= $(SRC_BS:.c=.o)
LIB		= -L ../../Libft-42 -lft
INC		= -I ../../Libft-42/
RM		= rm -f

all			: $(NAME1) $(NAME2) $(NAME3) $(NAME4)

$(NAME1)	: $(OBJ)
	$(CC) $(LIB) -o $@ test_string.o

$(NAME2)	: $(OBJ)
	$(CC) $(LIB) -o $@ test_other.o

$(NAME3)	: $(OBJ)
	$(CC) $(LIB) -o $@ test_ctype.o

$(NAME4)	: $(OBJ)
	$(CC) $(LIB) -o $@ test_stdlib.o

bonus	: $(OBJ_BS)
	$(CC) $(LIB) -o $(NAME5) test_bonus.o

.c.o		:
	 $(CC) $(CFLAGS) $(INC) -o $@ -c $<

.PHONY : all clean fclean bonus re rebonus

clean		:
	$(RM) $(OBJ) $(OBJ_BS)

fclean		: clean
	$(RM) $(NAME1) $(NAME2) $(NAME3) $(NAME4) $(NAME5)

re			: fclean all

rebonus		: fclean all
