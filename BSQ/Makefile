NAME = bsq
CC = gcc
CCFLAGS = -Wall -Werror -Wextra
SRCS = srcs/file_management.c srcs/main.c srcs/pivotctrl.c
OBJS = ${SRCS:.c=.o}

all: ${NAME}

.c.o: ${SRCS} 
	${CC} ${CCFLAGS} -c $< -o ${<:.c=.o} -I includes

${NAME}: ${OBJS} 
	${CC} -o ${NAME} ${OBJS}

clean:
	rm -f grid.txt grid1.txt grid2.txt
	rm -f -r ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

run: fclean all grid

grid:
	perl tools/generate_grid.pl 15 15 3 > grid.txt
	perl tools/generate_grid.pl 20 20 5 > grid1.txt
	perl tools/generate_grid.pl 100 100 10 > grid2.txt

.PHONY = grid run re fclean clean .c.o all
