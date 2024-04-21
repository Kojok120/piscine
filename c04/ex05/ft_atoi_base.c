/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:35:56 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/26 15:08:24 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	base_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= '\t' && base[i] <= '\r'))
			return (0);
		j = 1;
		while (base[i + j])
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

long long	ft_str_to_int(int i, char *str, char *base)
{
	int			k;
	long long	nbr;

	nbr = 0;
	while (str[i])
	{
		k = 0;
		while (str[i] != base[k])
		{
			k++;
			if (k == ft_strlen(base) + 1)
				return (nbr);
		}
		nbr = nbr * ft_strlen(base) + k;
		i++;
	}
	return (nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	n;

	if (ft_strlen(base) <= 1 || base_is_valid(base) == 0)
		return (0);
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	n = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	if (n % 2 == 1)
		sign = -1;
	return (sign * ft_str_to_int(i, str, base));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "-10000000000000000000000000000000";
// 	char base[] = "01";

// 	printf("%i\n", ft_atoi_base(str, base));
// 	return (0);
// }