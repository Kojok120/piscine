/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 01:22:28 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/19 10:19:28 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (*to_find == '\0')
		return (&str[i]);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			k = i;
			while (str[k] == to_find[j] && str[k] && to_find[j])
			{
				k++;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[40] = "strstr too ga toori masu youni";
// 	char find[30] = "too";
// 	printf("%s\n", ft_strstr(str, find));
// 	char str2[40] = "strstr too ga toori masu youni";
// 	char find2[30] = "too";
// 	printf("%s\n", strstr(str2, find2));
// 	return (0);
// }