/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:52:29 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/14 14:50:07 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0 || size == 1)
	{
		while (src[i])
			i++;
		return (i);
	}
	else
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		while (src[i])
			i++;
		return (i);
	}
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char    src[] ="okamotasdjfsgjapfkldjloapo";
// 	char    dest[4];

// 	printf("kokamoto: %u\n", ft_strlcpy(dest, src, 2));
// 	printf("origin  : %lu\n", strlcpy(dest, src, 2));
// 	printf("%s\n", dest);
// 	return (0);
// }
