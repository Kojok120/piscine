/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 22:36:44 by kokamoto          #+#    #+#             */
/*   Updated: 2024/03/14 08:09:50 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	print_hex_char(unsigned char c)
// {
// 	char	hex_high;
// 	char	hex_low;
// 	char	hex_high_char;
// 	char	hex_low_char;

// 	hex_high = (c >> 4) & 0xF;
// 	hex_low = c & 0xF;
// 	hex_high_char = hex_high < 10 ? hex_high + '0' : hex_high - 10 + 'a';
// 	hex_low_char = hex_low < 10 ? hex_low + '0' : hex_low - 10 + 'a';
// 	write(1, &hex_high_char, 1);
// 	write(1, &hex_low_char, 1);
// }

// void	print_memory_line(unsigned char *address, unsigned int size)
// {
// 	unsigned int	i;
// 	char			c;

// 	i = 0;
// 	// バイトデータの16進数表示
// 	while (i < 16 && i < size)
// 	{
// 		print_hex_char(address[i]);
// 		if (i % 2 == 1)
// 			write(1, " ", 1);
// 		i++;
// 	}
// 	// ASCII文字列として表示
// 	i = 0;
// 	while (i < 16 && i < size)
// 	{
// 		c = (address[i] >= 32 && address[i] <= 126) ? address[i] : '.';
// 		write(1, &c, 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// }

// void	*ft_print_memory(void *addr, unsigned int size)
// {
// 	unsigned char   *address;
// 	unsigned long long  current_address;
// 	int j;
// 	char    hex_digit;
// 	char    hex_char;

// 	address = (unsigned char *)addr;
// 	while (size > 0)
// 	{
// 		current_address = (unsigned long long)address;
// 		j = 60;
// 		while (j >= 0)
// 		{
// 			hex_digit = (current_address >> j) & 0xF;
// 			hex_char = hex_digit < 10 ? hex_digit + '0' : hex_digit - 10 + 'a';
// 			write(1, &hex_char, 1);
// 			j -= 4;
// 		}
// 		write(1, ": ", 2);
// 		print_memory_line(address, size);
// 		size -= 16;
// 		address += 16;
// 	}
// 	return (addr);
// }

// // int	main(void)
// // {
// // 	unsigned char	data[] = "Bonjour les amis";

// // 	ft_print_memory(data, sizeof(data));
// // 	return (0);
// // }
