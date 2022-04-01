##
## EPITECH PROJECT, 2021
## Makfile
## File description:
## makmak he
##

SRC	=	eval_expr.c \
		do_op.c \
		f_other.c \
		f_other_2.c \
		error_manager.c	\
		main_function.c

SRCTEST	=	eval_expr.c	\
		do_op.c	\
		f_other_2.c	\
		f_other.c

OBJ	=	$(SRC:.c=.o)

OBJTEST	=	$(SRCTEST:.c=.o)

CPPFLAGS	=	-I./include/ -L./lib/my/ -lmy

CFLAGS	=	-Wall -Wextra -Wshadow -Wconversion

NAME	=	calc

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C lib/my/
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(CFLAGS)

tests_run:	$(OBJTEST)
	gcc -o unit_tests $(OBJTEST) tests/ope_test.c $(CPPFLAGS) --coverage -lcriterion
	./unit_tests

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C lib/my/
	rm libmy.a
	rm *.g*
	rm unit_tests

re:	fclean all
	make fclean -C lib/my/

.PHONY: all tests_run clean fclean re
