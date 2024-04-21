/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:43:47 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/28 21:20:40 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

// #include <stdio.h>
// #include <string.h> // strcmp関数のために必要

// // テスト関数：文字列が"hello"と等しいかどうかをチェック
// int is_hello(char *str)
// {
//     return (strcmp(str, "hello") == 0);
// }

// int main(void)
// {
//     char *tab[] = {"hello", "world", "hello", "openai", "hello"};
//     int length = sizeof(tab) / sizeof(tab[0]); // 配列の長さを計算
//     int count;

//     count = ft_count_if(tab, length, &is_hello);
//     printf("The number of 'hello' strings: %d\n", count);

//     return (0);
// }
