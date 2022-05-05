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
LIB		= -L ../libft -lft
INC		= -I .
RM		= rm -f

all			: $(NAME1) $(NAME2) $(NAME3) $(NAME4)

$(NAME1)	: $(OBJ)
	$(CC) -o $@ test_string.o $(LIB) -lbsd

$(NAME2)	: $(OBJ)
	$(CC) -o $@ test_other.o $(LIB)

$(NAME3)	: $(OBJ)
	$(CC) -o $@ test_ctype.o $(LIB)

$(NAME4)	: $(OBJ)
	$(CC) -o $@ test_stdlib.o $(LIB)

bonus	: $(OBJ_BS)
	$(CC) -o $(NAME5) test_bonus.o $(LIB)

.c.o		:
	 $(CC) $(CFLAGS) $(INC) -o $@ -c $<

.PHONY : all clean fclean bonus re rebonus

clean		:
	$(RM) $(OBJ) $(OBJ_BS)

fclean		: clean
	$(RM) $(NAME1) $(NAME2) $(NAME3) $(NAME4) $(NAME5)

re			: fclean all

rebonus		: fclean all
