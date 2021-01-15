# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgingast <jgingast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/28 16:45:41 by jgingast          #+#    #+#              #
#    Updated: 2020/12/28 17:02:19 by jgingast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	*.c
OBJ		=	$(SRC:.c=.o)
CFLAGS		=	-Wall -Wextra -Werror
NAME		=	libft.a

all:	$(NAME)

$(NAME):
	clang -c $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
