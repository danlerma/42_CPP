# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/18 12:01:47 by dlerma-c          #+#    #+#              #
#    Updated: 2024/03/25 19:04:15 by dlerma-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#··············································································#
#                                   NAMES                                      #
#··············································································#

NAME = scalar

#··············································································#
#                                    SRCS                                      #
#··············································································#

SRCS = main.cpp ScalarConverter.cpp
OBJS = $(SRCS:%.cpp=%.o)

#··············································································#
#                                    FLAGS                                     #
#··············································································#

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

#··············································································#
#                                    RULES                                     #
#··············································································#

.PHONY: all re clean fclean

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
