/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:22:07 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/14 14:49:36 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	t;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && *str >= 'a' && *str <= 'z')
			*str = *str - 32;
		t = str[i - 1];
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			if (t < 48 || (t > 57 && t < 65) || (t > 90 && t < 97) || t > 122)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "salut, comment tu vas ? 4
//2mots quarante-deux; cinquante+et+un";
// 	printf("%s\n", str);
// 	printf("%s\n", ft_strcapitalize(str));
// }
