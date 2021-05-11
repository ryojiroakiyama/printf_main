NAME = ../libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all:d

c:
	${CC} ${NAME} main_c.c
	./a.out
s:
	${CC} ${NAME} main_s.c
	./a.out
p:
	${CC} ${NAME} main_p.c
	./a.out
d:
	${CC} ${NAME} main_d.c
	./a.out
i:
	${CC} ${NAME} main_i.c
	./a.out
u:
	${CC} ${NAME} main_u.c
	./a.out
sx:
	${CC} ${NAME} main_sx.c
	./a.out
lx:
	${CC} ${NAME} main_lx.c
	./a.out
per:
	${CC} ${NAME} main_per.c
	./a.out

clean:
	${RM} a.out

fclean: clean

re: fclean all

.PHONY: all clean fclean re
