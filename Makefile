# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/06 19:47:46 by scha              #+#    #+#              #
#    Updated: 2021/01/12 22:26:08 by scha             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS=ft_atoi.c ft_bzero.c ft_isalnum.c ft_itoa.c\
	 ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	 ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	 ft_memmove.c ft_memset.c ft_putchar_fd.c \
	 ft_putendl_fd.c ft_putnbr_fd.c \
	 ft_putstr_fd.c ft_strchr.c ft_split.c\
	 ft_strdup.c ft_strjoin.c \
	 ft_strlcat.c ft_strlen.c ft_strmapi.c\
	 ft_strncmp.c ft_strnstr.c \
	 ft_strrchr.c ft_strlcpy.c ft_calloc.c \
	 ft_substr.c ft_strtrim.c ft_tolower.c ft_toupper.c

BONUS=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
	  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c\
	  ft_lstiter.c ft_lstmap.c

OBJS=$(SRCS:.c=.o)

OBJS_BONUS=$(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
