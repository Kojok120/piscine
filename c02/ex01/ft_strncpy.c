/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:11:14 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/12 10:20:37 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0' && i < n)
	{
		dest[i] = str[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     char    *str;
//     char    dest[4];

//     str = "okamoto";
//     // ft_strncpy(dest, str, 4);
//     // printf("%s\n", dest);
//     printf("%s\n", strncpy(dest, str, 4));
//     return (0);
// }