##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Builds the my_ls program
##

SRC	=	src/main.c				\
		src/open_file.c			\
		src/map_generator.c		\
		src/error_handler.c		\
		src/buffer_handler.c	\
		src/str_to_array.c		\
		src/square_finder.c		\
		src/replace_square.c

OBJ	=	$(SRC:@.c=.o)

CFLAGS += -I./include

MAKEFLAGS += --no-print-directory

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
		@gcc -o $(NAME) $(OBJ) $(CFLAGS)
		@echo -e "\033[1;33m"$(NAME) "successfully build\033[0m"

clean:
	@rm -f *.o
	@echo -e "\033[1;33mObject files successfully cleaned\033[0m"

fclean:	clean
	@rm -f $(NAME)
	@echo -e "\033[1;33mBinary and object files successfully cleaned\033[0m"

re:	fclean all
