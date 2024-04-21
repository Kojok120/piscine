/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 10:43:57 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/28 21:48:23 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
// #include <unistd.h>

// void	ft_minus(int nb, int *arr, int i)
// {
// 	char	j;

// 	if (nb == -2147483648)
// 		write(1, "-2147483648", 11);
// 	else
// 	{
// 		nb = nb * -1;
// 		while (nb != 0)
// 		{
// 			arr[i] = nb % 10;
// 			nb = nb / 10;
// 			i++;
// 		}
// 		write(1, "-", 1);
// 		while (i > 0)
// 		{
// 			j = arr[i - 1] + '0';
// 			write(1, &j, 1);
// 			i--;
// 		}
// 	}
// 	return ;
// }
// void	ft_putnbr(int nb)
// {
// 	int		i;
// 	char	j;
// 	int		arr[50];

// 	i = 0;
// 	if (nb < 0)
// 		ft_minus(nb, arr, i);
// 	else if (nb == 0)
// 		write(1, "0", 1);
// 	else
// 	{
// 		while (nb != 0)
// 		{
// 			arr[i] = nb % 10;
// 			nb = nb / 10;
// 			i++;
// 		}
// 	}
// 	while (i > 0)
// 	{
// 		j = arr[i - 1] + '0';
// 		write(1, &j, 1);
// 		i--;
// 	}
// }
// int    main(void)
// {
//     int tab[5] = {1, 2, 3, 4, 5};

//     ft_foreach(tab, 5, &ft_putnbr);
//     return (0);
// }