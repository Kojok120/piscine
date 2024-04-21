/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 17:31:04 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/18 15:44:17 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	k;

	k = nb;
	if (power > 0)
	{
		if (nb == 0)
		{
			if (power == 0)
				return (1);
		}
		else
		{
			while (power > 1)
			{
				nb = k * nb;
				power--;
			}
			return (nb);
		}
	}
	else if (power == 0)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i\n", ft_iterative_power(-2, 5));
// 	return (0);
// }