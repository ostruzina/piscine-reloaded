NAME = libft.a
FLAG = -Wall -Wextra -Werror
INC = -Iincludes
FILES =	srcs/*.c
OBJ = *.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(FILES)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
