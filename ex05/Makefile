# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arodgers <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/22 16:05:23 by arodgers          #+#    #+#              #
#    Updated: 2024/07/22 16:05:55 by arodgers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = harl 

SRCS = main.cpp Harl.cpp 

OBJS = $(SRCS:.cpp=.o)

HDR = Harl.hpp 

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS) $(HDR)
	$(C++) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

