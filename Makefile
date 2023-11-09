# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johii <johii@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 19:20:01 by johii             #+#    #+#              #
#    Updated: 2023/11/09 20:53:07 by johii            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# replace makefile w your own :O plzzzz

CC = gcc
CFLAGS = -Wall -Wextra -Werror
src = server client
PRINTFDIR = ./libft/ft_printf
LIBFTDIR = ./libft

all: $(src)

server: server.c $(LIBFTDIR)/libft.a
	$(CC) $(CFLAGS) $< -I $(PRINTFDIR) -I $(LIBFTDIR) -L$(LIBFTDIR) -lft -o $@

client: client.c $(LIBFTDIR)/libft.a
	$(CC) $(CFLAGS) $< -I $(PRINTFDIR) -I $(LIBFTDIR) -L$(LIBFTDIR) -lft -o $@

$(LIBFTDIR)/libft.a: $(PRINTFDIR)/libftprintf.a
	@make -C $(LIBFTDIR)

$(PRINTFDIR)/libftprintf.a:
	@make -C $(PRINTFDIR)
	@cp $(PRINTFDIR)/libftprintf.a $(LIBFTDIR)/libft.a

clean:
	@make clean -C $(LIBFTDIR)
	@make clean -C $(PRINTFDIR)

fclean: clean
	@make fclean -C $(LIBFTDIR)
	@make fclean -C $(PRINTFDIR)
	@rm -rf $(src)

re: fclean all

.PHONY: server client all fclean clean re