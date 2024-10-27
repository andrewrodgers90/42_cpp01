# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arodgers <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/03 18:56:47 by arodgers          #+#    #+#              #
#    Updated: 2024/09/14 18:40:45 by arodgers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -Wshadow

NAME = moarBrainz 

SRCS = main.cpp Zombie.cpp zombieHorde.cpp 

OBJS = $(SRCS:.cpp=.o)

HDR = Zombie.hpp 

RM = rm -f

all: $(NAME)

%.o : %.cpp
	$(C++) $(FLAGS) $< -o $@ -c 

$(NAME): $(OBJS) $(HDR)
	$(C++) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
