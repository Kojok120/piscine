/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:15:40 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/14 03:02:51 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

//#include <unistd.h>
// int	main(void)
// {
// 	int	l;
//     int a[9] = {3, 5, 2, 4, 6, 0, 7, 9, 1};

//     ft_sort_int_tab(a, 9);
//     l = 0;
//     while (l < 9)
//     {
//         char digit = a[l] + '0';
//         write(1, &digit, 1);
//         l++;
//     }
//     return (0);
// }
