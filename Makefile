# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/09 22:24:18 by amasmeje          #+#    #+#              #
#    Updated: 2019/08/10 11:35:27 by amasmeje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_*.c

OSRCS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) -Wall -Wextra -Werror
	ar rcs $(NAME) $(OSRCS)

clean:
	/bin/rm -f $(OSRCS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all