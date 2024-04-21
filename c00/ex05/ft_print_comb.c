/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:07:56 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/09 09:56:16 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char i, char j, char k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i == '7' && j == '8' && k == '9')
	{
		return ;
	}
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_putchar(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
