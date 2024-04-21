/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:34:27 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/28 21:49:43 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*tmp;

	i = 0;
	while (tab[i])
	{
		if (tab[i + 1] && cmp(tab[i], tab[i + 1]) > 0)
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

// int	ft_strcmp(char *s1, char *s2)
// {
// 	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
// 	{
// 		s1++;
// 		s2++;
// 	}
// 	return (*s1 - *s2);
// }

// int	main(void)
// {
// 	char *tab[] = {"abc", "asd", "0183", "/com", NULL};

// 	ft_advanced_sort_string_tab(tab, &ft_strcmp);
// 	for (int i = 0; tab[i] != NULL; i++)
// 	{
// 		printf("%s\n", tab[i]);
// 	}

// 	return (0);
// }