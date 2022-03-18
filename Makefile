# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 23:44:52 by nouahhab          #+#    #+#              #
#    Updated: 2022/03/17 23:52:52 by nouahhab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = ft_print_char.c ft_print_hex.c ft_print_num.c ft_print_p.c \
	ft_print_str.c ft_print_unsigned.c ft_printf.c
	
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
%.o: %.c ft_printf.h
		$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME) 

re: fclean all
