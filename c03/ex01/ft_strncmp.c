/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 04:07:59 by kokamoto          #+#    #+#             */
/*   Updated: 2024/04/17 22:18:52 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if ((s1[i] == '\0' || s2[i] == '\0') || s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

//  #include <stdio.h>
//  #include <string.h>
//  int	main(void)
//  {
//  	char	*a;
//  	char	*b;

//  	a = "ABC";
//  	b = "ABCQSA";
//  	printf("%d\n", ft_strncmp(a, b, 4));
//  	return (0);
//  }
