/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 02:45:51 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/12 03:23:55 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*src;

// 	src = "OKAMOTO";
// 	printf("%i\n", ft_str_is_uppercase(src));
// 	src = "oKAMOTO";
// 	printf("%i\n", ft_str_is_uppercase(src));
// 	src = "";
// 	printf("%i\n", ft_str_is_uppercase(src));
// }