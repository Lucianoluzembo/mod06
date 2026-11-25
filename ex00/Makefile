# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/23 13:34:25 by lluzembo          #+#    #+#              #
#    Updated: 2026/11/23 15:15:48 by lluzembo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
 
INCLUDES = ScalarType.hpp parser.hpp

SRC = main.cpp ScalarType.cpp parser.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS):$(INCLUDES)

clean:
	rm -rf $(OBJS)	
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re
	

