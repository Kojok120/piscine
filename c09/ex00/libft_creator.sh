# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/24 09:50:31 by kokamoto          #+#    #+#              #
#    Updated: 2024/03/24 21:32:47 by kokamoto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc -Wall -Werror -Wextra -c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c ft_putchar.c

ar -rcs libft.a ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o ft_putchar.o

rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o