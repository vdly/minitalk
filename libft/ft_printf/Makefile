# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johii <johii@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 17:12:47 by johii             #+#    #+#              #
#    Updated: 2023/07/13 16:47:53 by johii            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
RM			= rm -rf
CFLAGS		= -Wall -Werror -Wextra
ARCHIVE		= ar -rc

CFILES		= ft_printf.c \
			  print_c.c \
			  print_s.c \
			  print_d.c \
			  print_p.c \
			  print_upperx.c \


COFILES		= $(CFILES:.c=.o)
OFILES		= $(COFILES)

all : $(NAME)

$(NAME): $(OFILES)
	$(ARCHIVE) $(NAME) $(COFILES)

clean :
	$(RM) $(OFILES)

fclean : clean
	$(RM) $(NAME)
	
re : fclean all

.PHONY : all clean fclean re
