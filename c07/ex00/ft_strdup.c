/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:41:22 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/21 03:01:22 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*array;

	len = ft_strlen(src);
	array = (char *)malloc((len + 1) * sizeof(char));
	if (array == '\0')
		return (0);
	i = 0;
	while (src[i])
	{
		array[i] = src[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*src;
// 	char	*src2;

// 	src = "doumo hello";
// 	printf("%s\n", ft_strdup(src));
// 	src2 = "doumo hello";
// 	printf("%s\n", strdup(src2));
// 	if (ft_strdup(src) != '\0')
// 		free(ft_strdup(src));
// 	if (strdup(src2) != '\0')
// 		free(strdup(src2));
// 	return (0);
// }
