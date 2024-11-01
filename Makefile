# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 11:22:09 by jsabroso          #+#    #+#              #
#    Updated: 2024/10/27 12:11:07 by jsabroso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			  = ft_printf.c ft_printf_helpers.c

NAME			  = libftprintf.a
CC				  = cc
CFLAGS		  = -Wall -Wextra -Werror
OBJS			  = $(SRCS:.c=.o)

all:      $(NAME)
$(NAME):	$(OBJS)
	          ar rcs $(NAME) $(OBJS)
clean:	
	          rm -f $(OBJS) $(BONUS_OBJS)
fclean:	
	          rm -f $(NAME) $(OBJS) $(BONUS_OBJS)
re: 		  fclean all
.PHONY: all clean fclean re bonus