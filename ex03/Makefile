# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 10:25:00 by araqioui          #+#    #+#              #
#    Updated: 2023/08/29 17:38:00 by araqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Inter

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -g
RM = rm -f
HEADER = ICharacter.hpp AMateria.hpp Character.hpp Cure.hpp Ice.hpp IMateriaSource.hpp MateriaSource.hpp

SRC = main ICharacter AMateria Character Cure  Ice IMateriaSource MateriaSource \

OBJ = $(SRC:=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $<

clean:
	@ $(RM) $(OBJ)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re