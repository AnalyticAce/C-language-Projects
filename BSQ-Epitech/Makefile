##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile bsq
##

SRC	=	source/algo_1.c	\
		source/algo_2.c	\
		source/load.c	\
		source/errors_handling.c	\
		source/fill.c	\
		source/open_read_load_map.c	\
		source/mapgen.c	\
		source/my_strcmp.c	\
		source/my_printf/my_putstr.c	\
		source/my_printf/my_strlen.c	\
		source/my_printf/my_strcpy.c	\
		source/my_printf/my_putchar.c	\
		source/my_printf/my_putnbr.c	\
		source/my_printf/my_print_hexa.c	\
		source/my_printf/my_printx.c	\
		source/my_printf/print_p.c	\
		source/my_printf/float.c	\
		source/my_printf/my_putnbu.c	\
		source/my_printf/print_b.c	\
		source/my_printf/print_o.c	\
		source/my_printf/my_printf.c	\
		source/my_printf/my_getnbr.c	\

TST =	source/my_printf/my_strlen.c	\
		source/my_printf/my_putchar.c	\
		source/my_printf/my_putstr.c	\
		source/my_printf/my_putnbr.c	\
		source/my_printf/my_getnbr.c	\
		source/my_printf/my_strcmp.c	\

STST =	tests/test_my_strlen.c	\
		tests/test_my_putstr.c	\
		tests/test_my_getnbr.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq
RED=\033[0;31m
GREEN=\033[0;32m
YELLOW=\033[0;33m
BLUE=\033[0;34m
MAGENTA=\033[0;35m
CYAN=\033[0;36m
NC=\033[0m

all: $(NAME)

$(NAME):
	@echo -e "${CYAN}"
	@cat banner.txt
	@echo -e "${NC}"
	@echo -e "${BLUE}\033[5mCompiling...${NC}"
	@gcc $(SRC) -o $(NAME) -g3
	@echo -e "${GREEN}\033[5m[✓] Compilation done.${NC}"

clean:
	@echo -e "${YELLOW}\033[5mCleaning up...${NC}"
	@rm -f $(OBJ)
	@echo -e "${GREEN}\033[5m[✓] Cleaning up done.${NC}"

fclean: clean
	@rm -f $(NAME)
	@echo -e "${GREEN}\033[5m[✓] Full clean done.${NC}"

re: fclean all

tests_run: $(OBJ)
	@echo -e "${MAGENTA}\033[5mRunning unit tests...${NC}"
	@gcc -o unit_tests $(TST) $(STST) --coverage -lcriterion
	./unit_tests
	@echo -e "${GREEN}\033[5m[✓] Unit tests passed.${NC}"

blink_file:
	@echo -e "${YELLOW}\033[5m"
	@cat /home/dshalom/Directories/CPE/B-CPE-110-COT-1-1-BSQ-shalom.dosseh/banner.txt
	@echo -e "${NC}"