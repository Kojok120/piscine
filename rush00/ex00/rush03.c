/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:26:45 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/10 23:06:56 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush_again(int x, int y);
void	ft_topbottom(int x);
void	ft_middle(int x);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
		rush_again(x, y);
	else
		write(1, "error", 5);
}

void	rush_again(int x, int y)
{
	int	j;

	j = 1;
	while (j <= y)
	{
		if (j == 1 || j == y)
			ft_topbottom(x);
		else
			ft_middle(x);
		j++;
	}
}
