##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Builds the my_ls program
##

SRC	=	main.c				\
		open_file.c			\
		map_generator.c		\
		error_handler.c		\
		buffer_handler.c	\
		str_to_array.c		\
		square_finder.c		\
		replace_square.c

OBJ	=	$(SRC:@.c=.o)

CFLAGS += -I./include

MAKEFLAGS += --no-print-directory

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
		@gcc -o $(NAME) $(OBJ)
		@echo -e "\033[1;33m"$(NAME) "successfully build\033[0m"

clean:
	@rm -f *.o
	@echo -e "\033[1;33mObject files successfully cleaned\033[0m"

fclean:	clean
	@rm -f $(NAME)
	@echo -e "\033[1;33mBinary and object files successfully cleaned\033[0m"

re:	fclean all
