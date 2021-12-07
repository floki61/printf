NAME = libftprintf.a

SRCS =	ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunsigned.c ft_putnbr_hexa.c \

OBJS = 	ft_printf.o ft_putchar.o ft_putstr.o ft_putnbr.o ft_putunsigned.o ft_putnbr_hexa.o \

FLAGS=-Wall -Wextra -Werror -c

all : $(NAME)

$(NAME) :
		gcc $(FLAGS) $(SRCS)
		ar -rc $(NAME) $(OBJS)

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
