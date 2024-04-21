/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 02:32:50 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/12 03:23:44 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*src;

// 	src = "okamoto";
// 	printf("%i\n", ft_str_is_lowercase(src));
// 	src = "Okamoto";
// 	printf("%i\n", ft_str_is_lowercase(src));
// 	src = "";
// 	printf("%i\n", ft_str_is_lowercase(src));
// }