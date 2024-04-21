/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 01:23:06 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/27 15:52:04 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	if (size > dest_len + 1)
	{
		i = 0;
		while (src[i] != '\0' && dest_len + i < size - 1)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	return (dest_len + src_len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dest[40] = "pouic";
// 	char	src[30] = "pouic";
// 	char	dest2[40] = "pouic";
// 	char	src2[30] = "pouic";

// 	printf("%u\n", ft_strlcat(dest, src, 6));
// 	printf("%s\n", dest);
// 	printf("%lu\n", strlcat(dest2, src2, 6));
// 	printf("%s\n", dest2);
// 	return (0);
// }
