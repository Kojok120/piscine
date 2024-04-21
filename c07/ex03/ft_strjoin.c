/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:49:16 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/26 18:35:02 by kokamoto         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*gattai(int size, char *array, char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		ft_strcat(array, strs[i]);
		if (i < size - 1)
			ft_strcat(array, sep);
		i++;
	}
	j = ft_strlen(array);
	array[j] = '\0';
	return (array);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*array;

	if (size == 0)
	{
		array = (char *)malloc(sizeof(char *));
		if (array == 0)
			return (0);
		array[0] = '\0';
		return (array);
	}
	i = 0;
	j = 0;
	while (i < size)
	{
		j = j + ft_strlen(strs[i]);
		i++;
	}
	j = j + ft_strlen(sep) * (size - 1);
	array = (char *)malloc((j + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	*array = 0;
	return (gattai(size, array, strs, sep));
}

// #include <stdio.h>

// int	main(void)
// {
// 	int size;
// 	char *result;
// 	char *strs[] = {"doumo", "konnnichiwa", "genkidesuka"};
// 	char *sep;

// 	size = 3;
// 	sep = "hello";
// 	result = ft_strjoin(size, strs, sep);
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }