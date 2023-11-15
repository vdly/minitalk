# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johii <johii@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 19:20:01 by johii             #+#    #+#              #
#    Updated: 2023/11/15 18:08:42 by johii            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER		=	server
CLIENT		=	client
SERVERB		=	server_bonus
CLIENTB		=	client_bonus

SFILE		=	server.c
CFILE		=	client.c
SBFILE		=	server_bonus.c
CBFILE		=	client_bonus.c

LIBFT		=	libft/*.c
PRINTF		=	libft/ft_printf/*.c

FLAGS		=	-Wall -Werror -Wextra
RM			=	rm -rf

all			:	$(CLIENT) $(SERVER) $(CLIENTB) $(SERVERB)

bonus		:	$(CLIENTB) $(SERVERB)

$(SERVER)	:
				gcc $(SFILE) $(LIBFT) $(PRINTF) -o $(SERVER)

$(CLIENT)	:
				gcc $(CFILE) $(LIBFT) $(PRINTF) -o $(CLIENT)

$(SERVERB)	:
				gcc $(SBFILE) $(LIBFT) $(PRINTF) -o $(SERVERB)

$(CLIENTB)	:
				gcc $(CBFILE) $(LIBFT) $(PRINTF) -o $(CLIENTB)

clean		:
				$(RM) libft/*.o
				$(RM) libft/ft_printf/*.o
            
fclean		:	clean
				$(RM) $(CLIENT) $(SERVER) $(CLIENTB) $(SERVERB)
            
re			:	fclean all

.PHONY		:	all bonus clean fclean re