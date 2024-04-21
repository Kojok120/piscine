/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:36:34 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/19 01:38:24 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	k;

	i = 2;
	if (nb < 0)
		nb = 0;
	while (i <= nb / i)
	{
		if (i * i == nb)
			break ;
		i++;
	}
	k = i;
	i = 2;
	if (nb >= 2)
	{
		while (i <= nb / k)
		{
			if (nb % i == 0)
				return (ft_find_next_prime(nb + 1));
			i++;
		}
		return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	int nb;

// 	nb = 2147482248;
// 	printf("%i\n", ft_find_next_prime(nb));
// 	return (0);
// }