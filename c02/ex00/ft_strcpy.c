/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:55:29 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/14 08:10:49 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*string;
// 	char	*ans_1;
// 	char	*ans_2;
// 	char	dest[14];

// 	string = "futurestrings";
// 	ans_1 = ft_strcpy(dest, string);
// 	ans_2 = strcpy(dest, string);
// 	printf("%s\n", ans_1);
// 	printf("%s\n", ans_2);
// 	return (0);
// }