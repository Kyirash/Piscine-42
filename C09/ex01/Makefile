CC = gcc
EXEC = libft.a
FLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}
RM = rm -f

all : ${EXEC}

%.o : %.c
	$(CC) $(FLAGS) -I includes -c $< -o ${<:.c=.o}

$(EXEC) : ${OBJS}
	ar rcs $(EXEC)

clean :
	$(RM) $(OBJS)

fclean : $(RM) $(EXEC)

re : fclean all
