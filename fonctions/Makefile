SRCS = ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_memmove.c \
       ft_memset.c \
       ft_strlen.c \
       ft_memcpy.c \
       ft_atoi.c\
       ft_toupper.c\
	   ft_tolower.c\
	   ft_bzero.c

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = libtf.a
OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re