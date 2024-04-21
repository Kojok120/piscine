/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:24:19 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/28 11:49:10 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	array = (int *)malloc(sizeof(int) * length);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}

// #include <stdio.h>
// int value(int n)
// {
//     return (n);
// }

// int main(void)
// {
//     int i;
//     int tab[] = {1, 2, 3, 4, 5};
//     int length = 5;
//     int *result;

//     result = ft_map(tab, length, &value);
//     i = 0;
//     while (i < length)
//     {
//         printf("%d\n ", result[i]);
//         i++;
//     }
//     printf("\n");
//     free(result);
//     return (0);
// }
