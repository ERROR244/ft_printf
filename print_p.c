/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:55:37 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/19 21:20:32 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex(char *str, int i)
{
	int x;

	i--;
	while (i >= 0)
	{
		x = print_ch(str[i]);
		if (x < 0)
			return (x);
		i--;
	}
	return (x);
}

static int	static_print_x(unsigned long long n, char c) {
	char				str[40];
	int					x;
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
	x = print_hex(str, j);
	if (x < 0)
		return (x);
	return (ft_strlen(str));
}

int	print_p(void *ptr)
{
	unsigned long	address;
	int				len;
	int				k;

	len = 0;
	address = (unsigned long)ptr;
	k = print_ch('0');
	if (k < 0)
		return (k);
	k = print_ch('x');
	if (k < 0)
		return (k);
	len = static_print_x(address, 'x');
	if (len < 0)
		return (len);
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
