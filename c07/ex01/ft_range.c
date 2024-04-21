/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:59:11 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/21 03:01:56 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*array;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (0);
	array = (int *)malloc(size * sizeof(int));
	if (array == 0)
		return (0);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	i;
// 	int	min;
// 	int	max;
// 	int	*array;

// 	i = 0;
// 	min = -10;
// 	max = 10;
// 	array = ft_range(min, max);
// 	if (array)
// 	{
// 		while (i < max - min)
// 		{
// 			printf("%d\n", array[i]);
// 			i++;
// 		}
// 		printf("\n");
// 		free(array);
// 	}
// 	else
// 		return (0);
// }
