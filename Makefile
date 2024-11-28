NAME = libft.a
CC = gcc
PT1 :=	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \

PT2 :=	ft_itoa.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_substr.c

CFLAGS = -Wall -Werror -Wextra -std=c99
RM = rm -f
DEPS = libft.h
OBJS = $(PT1:.c=.o) $(PT2:.c=.o)

%.o:%.c
	@$(CC) -c $(CFLAGS) -I. $< -o $@

${NAME}:${OBJS} $(INCLUDE)
	@ar -rsc ${NAME} ${OBJS}

all: $(NAME)

clean:
	@${RM} ${OBJS}

fclean:
	@${RM} ${OBJS}
	@${RM} ${NAME}
	@${RM} bonus

re: fclean all

.PHONY: all clean fclean re
