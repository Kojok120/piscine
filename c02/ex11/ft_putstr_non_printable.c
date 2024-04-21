/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:17:15 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/14 14:49:10 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_shori(char *str)
{
	char	remainder;
	char	quotient;
	char	i;
	char	j;

	quotient = *str;
	i = -1;
	write(1, "\\", 1);
	while (quotient != 0)
	{
		quotient = quotient / 16;
		i++;
	}
	j = i + 48;
	write(1, &j, 1);
	remainder = *str % 16;
	if (remainder < 10)
		remainder = remainder + 48;
	else
		remainder = remainder + 87;
	write(1, &remainder, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			ft_shori(&str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char *str;

// 	str = "okam oto\t\r\a\n ko{ji~\n";
// 	ft_putstr_non_printable(str);
// 	return (0);
// }