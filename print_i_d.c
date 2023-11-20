/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_i_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:09:03 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/20 08:59:41 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_i_d(long long n)
{
	char		*str;
	int			len;

	len = 0;
	str = ft_itoa(n);
	if (str == NULL)
		return (-1);
	len += print_str(str);
	free(str);
	return (len);
}

// int	main(void)
// {
// 	int i = print_i_d(0);
// 	printf("%d", i);
// 	print_ch('\n');
// }