/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:35:12 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/18 15:50:04 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb >= 1)
	{
		while (i <= nb / i)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     int nb = 2147483647;
// 	printf("%d\n", ft_sqrt(nb));
// 	return (0);
// }
