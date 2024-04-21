/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 01:39:12 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/12 07:10:26 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || ('Z' < str[i] && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*src;

// 	src = "Zkamoto";
// 	printf("%i\n", ft_str_is_alpha(src));
// 	src = "Zkamoto2";
// 	printf("%i\n", ft_str_is_alpha(src));
// 	src = "";
// 	printf("%i\n", ft_str_is_alpha(src));
// }
