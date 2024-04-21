/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:26:58 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/26 12:34:51 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	sign;
	int	num;

	i = 0;
	n = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	if (n % 2 == 1)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (sign * num);
}

// #include <stdio.h>
// int main(void)
// {
//     char    *str = "  --- ++2 3r12a3";
//     int num = ft_atoi(str);
//     printf("%i\n", num);
//     return (0);
// }
