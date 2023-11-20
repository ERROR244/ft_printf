/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:32:37 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/20 08:48:04 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *str)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (*str)
	{
		k = print_ch(*str);
		if (k < 0)
			return (k);
		i++;
		str++;
	}
	return (i);
}
