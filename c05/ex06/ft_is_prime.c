/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:06:52 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/18 15:49:16 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb >= 2)
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     int nb;

// 	nb = 2147483646;
// 	printf("%i\n", ft_is_prime(nb));
// 	return (0);
// }
