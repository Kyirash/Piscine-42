SRCS	= do-op.c operators.c ft_atoi.c ft_putnbr.c ft_strcmp.c

NAME	= do-op

OBJS	=  ${SRCS:.c=.o}

HEADERS	= includes/

.c.o	:
		gcc -Wall -Wextra -Werror -g3 -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
		gcc -Wall -Wextra -Werror -g3 -I ${HEADERS} ${OBJS} -o ${NAME}

all : ${NAME}


clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re : fclean all
