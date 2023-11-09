# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johii <johii@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 17:12:47 by johii             #+#    #+#              #
#    Updated: 2023/05/29 16:34:29 by johii            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
RM			= rm -rf
CFLAGS		= -Wall -Werror -Wextra
ARCHIVE		= ar -rc

CFILES		= ft_isalpha.c ft_toupper.c \
			  ft_isdigit.c ft_tolower.c \
			  ft_isalnum.c ft_strchr.c \
			  ft_isascii.c ft_strrchr.c \
			  ft_isprint.c ft_strncmp.c \
			  ft_strlen.c ft_memchr.c \
			  ft_memset.c ft_memcmp.c \
			  ft_bzero.c ft_strnstr.c \
			  ft_memcpy.c ft_atoi.c \
			  ft_itoa.c ft_split.c \
			  ft_memmove.c ft_strlcpy.c \
			  ft_strlcat.c ft_calloc.c \
			  ft_strdup.c ft_substr.c \
			  ft_strjoin.c ft_strtrim.c \
			  ft_strmapi.c ft_striteri.c \
			  ft_putchar_fd.c ft_putnbr_fd.c \
			  ft_putstr_fd.c ft_putendl_fd.c \


#CBFILES		= ft_lstnew.c \
				  ft_lstadd_front.c \
				  ft_lstsize.c \
				  ft_lstlast.c \
				  ft_lstadd_back.c \
				  ft_lstdelone.c \
				  ft_lstclear.c \
				  ft_lstiter.c \
				  ft_lstmapi.c

COFILES		= $(CFILES:.c=.o)
#CBOFILES	= $(CBFILES:.c=.o)
OFILES		= $(COFILES) #$(CBOFILES)

all : $(NAME)

$(NAME): $(OFILES) libft.h
	$(ARCHIVE) $(NAME) $(COFILES)

%.o : %.c
	cc $(CFLAGS) -c $^ -o $@

clean :
	$(RM) $(OFILES)

fclean : clean
	$(RM) $(NAME)
	
re : fclean all

.PHONY : all clean fclean re