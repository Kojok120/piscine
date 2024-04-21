/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:42:38 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/24 03:37:14 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	j;
	int		arr[100];

	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	else
	{
		while (nb != 0)
		{
			arr[i] = nb % 10;
			nb = nb / 10;
			i++;
		}
	}
	while (i > 0)
	{
		j = arr[i - 1] + '0';
		write(1, &j, 1);
		i--;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
