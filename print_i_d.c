/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_i_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:09:03 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/18 19:11:13 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_i_d(int i)
{
	long	n;
	int		r;

	n = i;
	r = 0;
	if (i < 0)
	{
		print_ch('-');
		n *= -1;
		r++;
	}
	if (n < 10)
		print_ch(n + 48);
	if (n < 10)
		r++;
	if (n >= 10)
	{
		print_i_d(n / 10);
		print_ch((n % 10) + 48);
	}
	while (i != 0)
	{
		i /= 10;
		r++;
	}
	return (r);
}

int	main()
{
	print_i_d(2147483647);
	print_ch('\n');
}