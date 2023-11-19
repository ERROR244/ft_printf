/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_i_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:09:03 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/19 21:51:40 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	function(int r, long long i)
{
	if (i < 0)
		r++;
	if (i == 0)
		r++;
	while (i != 0)
	{
		i /= 10;
		r++;
	}
	return (r);
}

int	print_i_d(long long i)
{
	char		*str;
	int			r;
	int			k;

	str = (char *)
	k = 0;
	r = 0;
	if (i < 0)
	{
		k = print_ch('-');
		if (k < 0)
			return (k);
		n *= -1;
		r++;
	}
	if (n < 10)
	{
		k = print_ch(n + 48);
		if (k < 0)
			return (k);
	}
	if (n >= 10)
	{
		print_i_d(n / 10);
		k = print_ch((n % 10) + 48);
		if (k < 0)
			return (k);
	}
	return (function(r, i));
}

// int	main(void)
// {
// 	int i = print_i_d(0);
// 	printf("%d", i);
// 	print_ch('\n');
// }