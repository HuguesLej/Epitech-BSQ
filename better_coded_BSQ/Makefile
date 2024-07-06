##
## EPITECH PROJECT, 2024
## Epitech-BSQ [WSL: Ubuntu]
## File description:
## Makefile
##

WHITE		=	\e[0m
RED			=	\e[1;31m
YELLOW		=	\e[1;33m
CYAN		=	\e[1;36m

MAKEFLAGS	=	--no-print-directory

SRC_DIR		=	src/

MAIN 		=	$(SRC_DIR)main.c

SRC			=	\
		display.c			\
		file.c				\
		replace.c			\
		square.c			\
		\
		map/init.c			\
		map/get.c			\
		map/generate.c		\
		\
		utils/integer.c		\
		utils/my_memory.c	\
		utils/split_str.c

SRC			:=	$(addprefix $(SRC_DIR), $(SRC))

TEST_SRC	=	\

BUILD		=	build/

MAIN_OBJ	=	$(MAIN:%.c=$(BUILD)/%.o)

OBJ			=	$(SRC:%.c=$(BUILD)/%.o)

TEST_OBJ	=	$(TEST_SRC:%.c=$(BUILD)/%.o)

CC			=	gcc

INC_DIRS	=	$(shell find ./include/ -type d)

CFLAGS		=	-Wall -Wextra -Werror $(addprefix -I, $(INC_DIRS))

LDFLAGS		=	--coverage -lcriterion

BIN			=	bsq

TEST_BIN	=	tests_bsq

DIE			=	exit 1

%:
	@echo -e "$(RED)Rule not found: $@$(WHITE)"
	@$(DIE)

%.c:
	@echo -e "$(RED)File not found: $@$(WHITE)"
	@$(DIE)

$(BUILD)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@ || $(DIE)

all:	$(BIN)

$(BIN):	$(MAIN_OBJ) $(OBJ)
	@$(CC) -o $(BIN) $(MAIN_OBJ) $(OBJ) $(CFLAGS)
	@echo -e "$(CYAN)[$(BIN)]: Successfully build$(WHITE)"
	@echo -e "$(CYAN)Compiled $(shell echo "$?" | wc -w) file(s)$(WHITE)"

debug:	CFLAGS += -g
debug:	re

clean:
	@rm -f $(MAIN_OBJ) $(OBJ)
	@echo -e "$(YELLOW)[$(BIN)]: Object files successfully cleaned$(WHITE)"

fclean:	clean
	@rm -f $(BIN)
	@echo -e "$(YELLOW)[$(BIN)]: Binary file successfully cleaned$(WHITE)"

re:	fclean all

tests_run:	$(TEST_OBJ)
	@$(CC) -o $(TEST_BIN) $(TEST_OBJ) $(SRC) $(CFLAGS) $(LDFLAGS)
	@echo -e "$(CYAN)$(TEST_BIN) successfully build$(WHITE)"
	@echo -e "$(CYAN)Compiled $(shell echo "$?" | wc -w) file(s)$(WHITE)"
	@./$(TEST_BIN)
	@mkdir -p coverage/
	@mv *.gc* coverage/

tests_clean:
	@rm -f $(TEST_BIN)
	@rm -f $(TEST_OBJ)
	@find -name "*.gcno" -delete
	@find -name "*.gcda" -delete
	@echo -e "$(YELLOW)Criterion tests successfully cleaned$(WHITE)"

cov:
	@gcovr --exclude tests/

covbr:
	@gcovr --exclude tests/ --branches

.PHONY:	all debug clean fclean re tests_run tests_clean cov covbr
