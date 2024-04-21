/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:50:03 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/28 17:19:10 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		else
			i++;
	}
	return (0);
}

// #include <stdio.h>
// int two_chars(char *str)
// {
//     return (str && str[2] != '\0');
// }
// int main(void)
// {
//     char *tab[] = {"hi", "hello", "bonjour", NULL};
//     if (ft_any(tab, &two_chars))
//         printf("long.\n");
//     else
//         printf("short.\n");
//     return (0);
// }
