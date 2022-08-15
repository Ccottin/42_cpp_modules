# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccottin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/03 12:16:24 by ccottin           #+#    #+#              #
#    Updated: 2022/08/15 12:09:42 by ccottin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook

SRCS	= PhoneBook.cpp

CC	= c++

OBJS	= $(SRCS:.cpp=.o)

INCLUDE	= -I./PhoneBook.hpp -I./Contact.hpp

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3

all	:	$(NAME)

%.o	:	%.cpp
		$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME)	:	$(OBJS)
		$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) -o $@

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean
		make

.PHONY	:	all fclean clean re
