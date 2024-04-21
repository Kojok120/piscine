/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 03:30:02 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/19 10:21:03 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

//#include <stdio.h>
// int	main(void)
// {
// 	char	*a;
// 	char	*b;

// 	a = "ABC";
// 	b = "ABCQSA";
// 	printf("%d\n", ft_strcmp(a, b));
// 	return (0);
// }
