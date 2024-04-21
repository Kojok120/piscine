/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:11:31 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/28 17:28:03 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ascend;
	int	descend;

	i = 0;
	ascend = 0;
	descend = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			ascend++;
		else if (f(tab[i], tab[i + 1]) > 0)
			descend++;
		i++;
	}
	if (ascend > 0 && descend > 0)
		return (0);
	return (1);
}

// int f(int a, int b){
//     return (a-b);
// }
// #include <stdio.h>
// int main()
// {
//     int tab[5] = {1, 1, 1, 2, 2};
//     printf("%d\n", ft_is_sort(tab, 5, f));
// }