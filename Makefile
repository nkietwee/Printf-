# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 15:12:51 by nkietwee          #+#    #+#              #
#    Updated: 2022/10/30 13:45:18 by nkietwee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= libftprintf.a
SRCS	= ft_printf.c\
	ft_printf_util1.c\
	ft_printf_util2.c
	 
FLAGS = gcc -Wall -Wextra -Werror	  
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

%o: %c
	$(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all  bonus clean fclean re
