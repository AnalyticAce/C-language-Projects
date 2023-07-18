##
## EPITECH PROJECT, 2022
## my_hunter
## File description:
## my hunter makefile
##

TST =	source/my_printf/my_strlen.c	\
		source/my_printf/my_putchar.c	\
		source/my_printf/my_putstr.c	\
		source/my_printf/my_putnbr.c	\
		source/my_printf/my_getnbr.c	\
		source/my_printf/my_strcmp.c	\

STST =	tests/test_my_strlen.c	\
		tests/test_my_putstr.c	\
		tests/test_my_getnbr.c	\

SRC	=	source/main.c	\
		source/parsing.c	\
		source/make_your_choise.c	\
		source/lidar_info.c	\
		source/maker.c	\
		source/deplacement.c	\
		source/my_printf/my_putchar.c	\
		source/my_printf/my_putstr.c	\
		source/my_printf/my_strlen.c	\
		source/my_printf/my_strcpy.c	\
		source/my_printf/my_putnbr.c	\
		source/my_printf/my_print_hexa.c	\
		source/my_printf/my_printx.c	\
		source/my_printf/print_p.c	\
		source/my_printf/float.c	\
		source/my_printf/my_putnbu.c	\
		source/my_printf/print_b.c	\
		source/my_printf/print_o.c	\
		source/my_printf/my_printf.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	ai

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
NC = \033[0m

all:	$(NAME)

$(NAME):
	@echo -e "${CYAN}"
	@cat source/banner.txt
	@echo -e "${NC}"
	@echo -e "${BLUE}Compiling...${NC}"
	@echo -n 'Progress: ['
	@for i in {1..30}; do \
		echo -ne "\033[48;5;$$((i+232))m \033[0m"; \
		sleep 0.09; \
	done
	@echo -e "]"
	@gcc $(SRC) -o $(NAME) -g3 | while read line; do \
		echo -ne "\033[48;5;$$((RANDOM%232+1))m \033[0m"; \
	done
	@echo ''
	@echo -e "${GREEN}[✓] Compilation done.${NC}"

clean:
	@rm -f $(OBJ)

fclean:	clean
	@echo -e "${RED}[✓] Removing backup and temporary files${NC}"
	@rm -f $(NAME)
	@rm -f *~
	@rm -f *#
	@rm -f unit_tests
	@rm -f *.gcda
	@rm -f *.gcno
	@echo -e "${YELLOW}[✓] Loading...${NC}"
	@echo -e "${GREEN}[✓] Removing done :)...${NC}"

re:	fclean all

tests_run:	$(OBG)
	gcc -o unit_tests $(TST) $(STST) --coverage -lcriterion
	./unit_tests
