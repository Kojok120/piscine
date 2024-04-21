/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:45:34 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/24 09:11:15 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_minus(int nb, int *arr, int i)
{
	char	j;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		nb = nb * -1;
		while (nb != 0)
		{
			arr[i] = nb % 10;
			nb = nb / 10;
			i++;
		}
		write(1, "-", 1);
		while (i > 0)
		{
			j = arr[i - 1] + '0';
			write(1, &j, 1);
			i--;
		}
	}
	return ;
}

void	ft_putnbr(int nb)
{
	int		i;
	char	j;
	int		arr[100];

	i = 0;
	if (nb < 0)
		ft_minus(nb, arr, i);
	else if (nb == 0)
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

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// 	return (0);
// }
