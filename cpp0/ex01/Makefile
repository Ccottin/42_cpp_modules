# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccottin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/03 12:16:24 by ccottin           #+#    #+#              #
#    Updated: 2022/09/12 20:13:19 by ccottin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook

SRCS	= PhoneBook.cpp Contact.cpp

CC	= c++

OBJS	= $(SRCS:.cpp=.o)

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
