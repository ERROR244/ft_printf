/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:20:34 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/17 21:26:57 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int return_len(int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	print_u(unsigned int n)
{
	int i;

	i = 0;
	i = return_len(n);
	if (n < 10)
		print_ch(n + 48);
	else
	{
		print_u(n / 10);
		print_ch((n % 10) + 48);
	}
	return (i);
}

// int	main()
// {
// 	print_u(2U * 2147483647U);
// 	print_ch('\n');
// }