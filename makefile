SRCS = ft_isalpha.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strchr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strnstr.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_strrchr.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_memcmp.c \
	ft_strdup.c \
	ft_memchr.c \
	ft_memmove.c \


OBJS := $(SRCS:.c=.o)

LIBH = libft.h

HOBJS := $(LIBH:.h=.gch)

CFLAGS = -Wall -Wextra -Werror -std=c99 

NAME = libft.a

LIBC = ar -rcs

RM = rm -f

%.o: %.c $(LIBH) 
	cc $(CFLAGS) -c $< -o $@  -I $(LIBH)

$(NAME): $(OBJS) 
	$(LIBC) $(NAME) $(OBJS) 

all: $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re