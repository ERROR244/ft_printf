/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:55:37 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/19 19:17:41 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_hex(char *str, int i)
{
	i--;
	while (i >= 0)
	{
		print_ch(str[i]);
		i--;
	}
}

static int	static_print_x(unsigned long long n, char c)
{
	char				str[40];
	unsigned int		i;
	unsigned int		j;

	j = 0;
	i = 0;
	if (n == 0)
		return (print_ch('0'));
	while (n != 0)
	{
		i = n % 16;
		if (i < 10)
			i = i + '0';
		else if (c == 'X')
			i = i + 'A' - 10;
		else if (c == 'x')
			i = i + 'a' - 10;
		str[j++] = i;
		n = n / 16;
	}
	str[j] = '\0';
	print_hex(str, j);
	return (ft_strlen(str));
}

int	print_p(void *ptr)
{
	unsigned long	address;
	int				len;

	len = 0;
	address = (unsigned long)ptr;
	print_ch('0');
	print_ch('x');
	len = static_print_x(address, 'x');
	return (len + 2);
}

// int main()
// {
//     void *ptr = "knke";

//     int printf_return (= printf("%p", ptr));
// 	printf("\n");
//     int printf_p_return (= print_p(ptr));

// 	printf("\n");
//     printf("printf return: %d, print_p return: %d \n", printf_return,
	// printf_p_return);
//     return (0);
// }
