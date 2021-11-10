# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/14 16:15:10 by ashea             #+#    #+#              #
#    Updated: 2020/05/14 16:17:07 by ashea            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_substr.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = $(SRCS:.c=.o)

OBJ_BONUS = $(SRCS_BONUS:.c=.o)

FLAGS = -Wall -Werror -Wextra -I .

INCLUDE = libft.h

COMPILE = gcc $(FLAGS) -c 

LIB = ar rc $(NAME)

RANLIB = ranlib $(NAME)

REMOVE = rm -f

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME):$(OBJ)
	$(LIB) $^
	$(RANLIB)

bonus:	$(OBJ) $(OBJ_BONUS)
	$(LIB) $^
	$(RANLIB)

%.o: %.c $(INCLUDE)
	 $(COMPILE) $< -fPIC

clean:
	$(REMOVE) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all