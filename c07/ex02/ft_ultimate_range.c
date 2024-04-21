/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:13:07 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/25 22:09:56 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	i = 0;
	if (*range == 0)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*range;
// 	int	size;

// 	min = -10;
// 	max = 10;
// 	size = ft_ultimate_range(&range, min, max);
// 	printf("%d\n", size);
// 	free(range);
// 	return (0);
// }
