/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:42:05 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/27 02:18:28 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *base);

int	base_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
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

long long	ft_str_to_int(int i, char *nbr, char *base_from)
{
	int			k;
	long long	nbri;

	nbri = 0;
	while (nbr[i])
	{
		k = 0;
		while (nbr[i] != base_from[k])
		{
			k++;
			if (k == ft_strlen(base_from) + 1)
				return (nbri);
		}
		nbri = nbri * ft_strlen(base_from) + k;
		i++;
	}
	return (nbri);
}

char	*ft_put_array(int *arr, char *arr_rev, long long nbr2, char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (nbr2 < 0)
	{
		arr_rev[j] = '-';
		nbr2 *= -1;
		j++;
	}
	while (nbr2 != 0)
	{
		arr[i] = nbr2 % ft_strlen(base);
		nbr2 = nbr2 / ft_strlen(base);
		i++;
	}
	while (i > 0)
	{
		arr_rev[j] = base[arr[i - 1]];
		i--;
		j++;
	}
	arr_rev[j] = '\0';
	return (arr_rev);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int			j;
	int			arr[100];
	char		*arr_rev;
	long long	nbr2;

	arr_rev = (char *)malloc(sizeof(char) * 100);
	if (arr_rev == NULL)
		return (NULL);
	j = 0;
	nbr2 = (long long)nbr;
	if (nbr2 == 0)
	{
		arr_rev[j] = base[0];
		return (arr_rev);
	}
	return (ft_put_array(arr, arr_rev, nbr2, base));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	int	sign;
	int	n;
	int	nbri;

	if (base_is_valid(base_from) == 0 || base_is_valid(base_to) == 0)
		return (NULL);
	i = 0;
	sign = 1;
	while (nbr[i] == ' ' || (nbr[i] >= '\t' && nbr[i] <= '\r'))
		i++;
	n = 0;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			n++;
		i++;
	}
	if (n % 2 == 1)
		sign = -1;
	nbri = sign * ft_str_to_int(i, nbr, base_from);
	return (ft_putnbr_base(nbri, base_to));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char nbr[] = " --++2147483647";
// 	char base_from[] = "0123456789";
// 	char base_to[] = "0123456789abcdef";

// 	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
// 	return (0);
// }