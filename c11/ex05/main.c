/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:07:56 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/28 16:56:46 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	plus(int value1, int value2);
void	minus(int value1, int value2);
void	divide(int value1, int value2);
void	multiply(int value1, int value2);
void	mod(int value1, int value2);
int		ft_atoi(char *str);

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_minus(int nb, int *arr, int i)
{
	char	j;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		nb = nb * -1;
		while (nb != 0)
		{
			arr[i] = nb % 10;
			nb = nb / 10;
			i++;
		}
		write(1, "-", 1);
		while (i > 0)
		{
			j = arr[i - 1] + '0';
			write(1, &j, 1);
			i--;
		}
	}
	return ;
}

void	ft_putnbr(int nb)
{
	int		i;
	char	j;
	int		arr[100];

	i = 0;
	if (nb < 0)
		ft_minus(nb, arr, i);
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		while (nb != 0)
		{
			arr[i] = nb % 10;
			nb = nb / 10;
			i++;
		}
	}
	while (i > 0)
	{
		j = arr[i - 1] + '0';
		write(1, &j, 1);
		i--;
	}
}

int	decide_function(char *op)
{
	if (ft_strcmp(op, "+") == 0)
		return (0);
	if (ft_strcmp(op, "-") == 0)
		return (1);
	if (ft_strcmp(op, "/") == 0)
		return (2);
	if (ft_strcmp(op, "*") == 0)
		return (3);
	if (ft_strcmp(op, "%") == 0)
		return (4);
	return (5);
}

int	main(int argc, char **argv)
{
	void	(*f[5])(int, int);

	f[0] = plus;
	f[1] = minus;
	f[2] = divide;
	f[3] = multiply;
	f[4] = mod;
	if (argc != 4)
		return (0);
	if (decide_function(argv[2]) == 5)
	{
		write(1, "0\n", 2);
		return (0);
	}
	f[decide_function(argv[2])](ft_atoi(argv[1]), ft_atoi(argv[3]));
	write(1, "\n", 1);
	return (0);
}
