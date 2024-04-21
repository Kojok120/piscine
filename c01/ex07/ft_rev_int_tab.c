/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 07:50:20 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/14 03:01:28 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

// #include <unistd.h>

// int	main(void)
// {
// 	int		l;
// 	int		a[6] = {2, 2, 3, 4, 5, 6};
// 	char	digit;

// 	ft_rev_int_tab(a, 6);
// 	l = 0;
// 	while (l < 6)
// 	{
// 		digit = a[l] + '0';
// 		write(1, &digit, 1);
// 		l++;
// 	}
// 	return (0);
// }