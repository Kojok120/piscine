/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 23:44:41 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/14 03:13:54 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
//#include <stdio.h>
// int	main(void)
// {
// 	int	j;
// 	char	str[] = "okamotodesu";

// 	printf("%s\n", str);
// 	j = ft_strlen(str);
// 	printf("%d\n", j);
// 	return (0);
// }
