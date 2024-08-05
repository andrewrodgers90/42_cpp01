# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arodgers <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/03 18:56:47 by arodgers          #+#    #+#              #
#    Updated: 2024/07/22 12:47:29 by arodgers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = brainz 

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp 

OBJS = $(SRCS:.cpp=.o)

HDR = Zombie.hpp 

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS) $(HDR)
	$(C++) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

