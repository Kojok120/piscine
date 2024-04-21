/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 05:53:14 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/16 14:45:01 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char i, char j, char s, char t)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &s, 1);
	write(1, &t, 1);
	if ((i == '9' && j == '8') && (s == '9' && t == '9'))
		return ;
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_latter(char i, char j, char s, char t)
{
	s = i;
	while (s <= '9')
	{
		if (s == i)
			t = j + 1;
		else
			t = '0';
		while (t <= '9')
		{
			ft_putchar(i, j, s, t);
			t++;
		}
		s++;
	}
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	s;
	char	t;

	i = '0';
	s = '0';
	t = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			ft_print_latter(i, j, s, t);
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
