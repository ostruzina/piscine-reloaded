NAME = ft_display_file
FLAG = -Wall -Wextra -Werror
SRC = ft_display_file.c

all: $(NAME)

$(NAME): 
	gcc -c $(FLAG) $(SRC)
	gcc -o $(NAME) ft_display_file.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
