/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:05:29 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/28 21:49:28 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i + 1] && tab[i][j] == tab[i + 1][j])
			j++;
		if (tab[i + 1] && tab[i][j] > tab[i + 1][j])
		{
			tmp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

// #include <stdio.h>

// void	print_string_tab(char **tab)
// {
// 	int	i;

// 	i = 0;
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// }
// int	main(void)
// {
// 	char *strings[] = {"\0", "apple", "32", "asf a", "ksfa", "kojihugy",
// 		"vbnmj", "4536778", NULL};
// 	print_string_tab(strings);
// 	ft_sort_string_tab(strings);
// 	print_string_tab(strings);
// 	return (0);
// }