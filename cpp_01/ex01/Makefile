# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/13 12:20:10 by dlerma-c          #+#    #+#              #
#    Updated: 2022/04/13 14:30:09 by dlerma-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#··············································································#
#                                   NAMES                                      #
#··············································································#

NAME = zombie

#··············································································#
#                                    SRCS                                      #
#··············································································#

SRCS = main.cpp Zombie.cpp ZombieHorde.cpp
OBJS = $(SRCS:%.cpp=%.o)

#··············································································#
#                                    FLAGS                                     #
#··············································································#

CXX = clang++
CXXFLAGS = -Wall -Werror -Wextra

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
