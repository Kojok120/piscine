/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:00:35 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/24 03:39:24 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*array;

	len = ft_strlen(src);
	array = (char *)malloc((len + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		array[i] = src[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	tab = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[ac].str = 0;
	return (tab);
}

// void				ft_show_tab(struct s_stock_str *par);
// int	main(int argc, char **argv)
// {
// 	ft_show_tab(ft_strs_to_tab(argc, argv));
// 	return (0);
// }
