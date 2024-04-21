/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:22:19 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/11 14:57:02 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// //#include <stdio.h>
// int	main(void)
// {
// 	int	c;
// 	int	d;
// 	int	s;
// 	int	t;

// 	c = 14;
// 	d = 4;
// 	ft_div_mod(c, d, &s, &t);
// 	printf("%i\n", s);
// 	printf("%i\n", t);
// }