# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johii <johii@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 19:20:01 by johii             #+#    #+#              #
#    Updated: 2023/11/13 20:09:00 by johii            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER	=	server
CLIENT	=	client

SFILE	=	server.c
CFILE	=	client.c

LIBFT	=	libft/*.c
PRINTF	=	libft/ft_printf/*.c

FLAGS	=	-Wall -Werror -Wextra
RM		=	rm -rf

all		:	$(CLIENT) $(SERVER)

$(SERVER)	:
			gcc $(SFILE) $(LIBFT) $(PRINTF) -o $(SERVER)

$(CLIENT)	:
			gcc $(CFILE) $(LIBFT) $(PRINTF) -o $(CLIENT)

clean	:
#			$(RM) *.o
			$(RM) libft/*.o
			$(RM) libft/ft_printf/*.o
            
fclean	:	clean
				$(RM) $(CLIENT) $(SERVER)
            
re		:	fclean all

.PHONY	:	all clean fclean re