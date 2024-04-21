/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 02:21:15 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/12 07:13:37 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*src;

// 	src = "4242";
// 	printf("%i\n", ft_str_is_numeric(src));
// 	src = "4242r";
// 	printf("%i\n", ft_str_is_numeric(src));
// 	src = "";
// 	printf("%i\n", ft_str_is_numeric(src));
// }
