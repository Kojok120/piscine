/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:41:44 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/27 02:18:47 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check(char str, char *charset)
{
	int	a;

	a = 0;
	while (charset[a])
	{
		if (str == charset[a])
			return (0);
		a++;
	}
	return (1);
}

char	*ft_strndup(char *src, int n)
{
	int		i;
	int		len;
	char	*array;

	len = ft_strlen(src);
	array = (char *)malloc((len + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (src[i] && i < n)
	{
		array[i] = src[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

char	**bunkatsu(char *str, char *charset, char **array, int i)
{
	int	j;
	int	len;

	j = 0;
	while (str[i])
	{
		if (check(str[i], charset) == 1)
		{
			len = 0;
			while (str[i + len] && check(str[i + len], charset) == 1)
				len++;
			array[j] = ft_strndup(&str[i], len);
			if (array[j] == NULL)
				return (NULL);
			i += len;
			j++;
		}
		else
			i++;
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		i;

	i = 0;
	array = (char **)malloc((ft_strlen(str) + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	return (bunkatsu(str, charset, array, i));
}

// #include <unistd.h>

// int	main(void)
// {
// 	char *str = "                 ";
// 	char *charset = "         ";
// 	char **result = ft_split(str, charset);
// 	int i = 0;

// 	while (result[i])
// 	{
// 		write(1, result[i], ft_strlen(result[i]));
// 		write(1, " ", 1);
// 		free(result[i]);
// 		i++;
// 	}
// 	return (0);
// }