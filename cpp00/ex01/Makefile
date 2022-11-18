# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 14:34:00 by soo               #+#    #+#              #
#    Updated: 2022/11/16 14:12:35 by soo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

SRCS =	srcs/main.cpp srcs/Contact.cpp srcs/PhoneBook.cpp

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $@ $^
	
clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean 
	all

.PHONY : all clean fclean re 