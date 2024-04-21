/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:51:07 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/28 17:21:53 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	plus(int value1, int value2)
{
	int	ans;

	ans = value1 + value2;
	ft_putnbr(ans);
}

void	minus(int value1, int value2)
{
	int	ans;

	ans = value1 - value2;
	ft_putnbr(ans);
}

void	divide(int value1, int value2)
{
	int	ans;

	if (value2 == 0)
	{
		write(1, "Stop : division by zero", 23);
		return ;
	}
	ans = value1 / value2;
	ft_putnbr(ans);
}

void	multiply(int value1, int value2)
{
	int	ans;

	ans = value1 * value2;
	ft_putnbr(ans);
}

void	mod(int value1, int value2)
{
	int	ans;

	if (value2 == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return ;
	}
	ans = value1 % value2;
	ft_putnbr(ans);
}
