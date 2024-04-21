/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:25:52 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/26 15:08:34 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	base_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 1;
		while (base[i + j])
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putstr(int *arr, int i, char *base)
{
	char	j;

	while (i > 0)
	{
		j = base[arr[i - 1]];
		write(1, &j, 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	int			arr[100];
	long long	nbr2;

	i = 0;
	nbr2 = (long long)nbr;
	if (ft_strlen(base) <= 1 || base_is_valid(base) == 0)
		return ;
	if (nbr2 < 0)
	{
		write(1, "-", 1);
		nbr2 *= -1;
	}
	else if (nbr2 == 0)
		write(1, &base[0], 1);
	while (nbr2 != 0)
	{
		arr[i] = nbr2 % ft_strlen(base);
		nbr2 = nbr2 / ft_strlen(base);
		i++;
	}
	ft_putstr(arr, i, base);
}

// int	main(void)
// {
// 	int		nbr;
// 	char	base[] = "0123456789abcdef";

// 	nbr = 12;
// 	ft_putnbr_base(nbr, base);
// 	return (0);
// }
