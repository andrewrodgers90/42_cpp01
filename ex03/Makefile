# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arodgers <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 17:20:18 by arodgers          #+#    #+#              #
#    Updated: 2024/09/14 18:41:49 by arodgers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -Wshadow

NAME = unnecessaryViolence 

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 

OBJS = $(SRCS:.cpp=.o)

HDR = Weapon.hpp HumanA.hpp HumanB.hpp 

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
