/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:02:18 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/18 15:51:00 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	s;

	s = 1;
	if (nb > 0)
	{
		while (nb > 0)
		{
			s = s * nb;
			nb--;
		}
		return (s);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int num;

// 	num = 5;
// 	printf("%i\n", ft_iterative_factorial(num));
// 	return (0);
// }