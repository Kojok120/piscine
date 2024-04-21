/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:56:21 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/15 20:04:20 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	d;

	if (n >= 0)
	{
		d = 'P';
	}
	else
	{
		d = 'N';
	}
	write(1, &d, 1);
}

/*
int	main(void)
{
	int	n;

	n = -2;
	ft_is_negative(n);
	return (0);
}
*/
