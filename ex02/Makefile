# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arodgers <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/22 15:38:51 by arodgers          #+#    #+#              #
#    Updated: 2024/09/14 18:41:23 by arodgers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -Wshadow

NAME = hiThisIsBrain 

SRCS = main.cpp 

OBJS = $(SRCS:.cpp=.o)

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
