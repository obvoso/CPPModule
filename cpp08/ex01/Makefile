# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: soo <soo@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 20:02:47 by soo               #+#    #+#              #
#    Updated: 2023/02/04 17:44:42 by soo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = span

SRCS =	main.cpp Span.cpp

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^
	
clean :
	${RM} $(OBJS)

fclean : clean
	${RM} $(NAME)

re : fclean all

.PHONY : all clean fclean re 