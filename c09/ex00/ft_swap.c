/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:49:47 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/11 10:21:57 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	sub;

	sub = *a;
	*a = *b;
	*b = sub;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a;
// 	int b;

// 	a = 5;
// 	b = 3;
// 	ft_swap(&a, &b);
// 	printf("%i\n", a);
// 	printf("%i\n", b);
// 	return (0);
// }