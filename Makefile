# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 18:34:14 by pbumidan          #+#    #+#              #
#    Updated: 2024/01/16 18:05:34 by pbumidan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#colours
GREEN = \033[0;92m

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
	ft_atoi.c \
	ft_calloc.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_split.c \
	ft_itoa.c \

BSRCS = ft_lstadd_back_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstmap_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \

OBJS := $(SRCS:.c=.o)

BOJS := $(BSRCS:.c=.o)

NAME = libft.a

LIBH = libft.h

CFLAGS = -Wall -Wextra -Werror

%.o: %.c $(LIBH) 
	cc $(CFLAGS) -c $< -o $@  -I $(LIBH)
	
.bonus: $(BOJS) $(LIBH)
	ar -rcs $(NAME) $^
	@touch .bonus

$(NAME): $(OBJS) $(LIBH)
	ar -rcs $(NAME) $^
	@echo "$(GREEN)libft.a has been compiled!"

bonus: .bonus

all: $(NAME)

clean: 
	rm -f $(OBJS) $(BOJS) .bonus
	@echo "$(GREEN)The object files have been removed!"

fclean:
	rm -f $(NAME) $(OBJS)
	@echo "$(GREEN)The object files and library file have been removed!"

re: fclean all

.PHONY: all clean fclean re bonus