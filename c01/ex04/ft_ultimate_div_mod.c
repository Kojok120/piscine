/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:29:18 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/11 10:20:56 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
//#include <stdio.h>
// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 13;
// 	y = 3;
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("%i\n", x);
// 	printf("%i\n", y);
// }