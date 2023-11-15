/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:55:37 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/15 19:21:11 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_p(void *ptr)
{
	unsigned long	address;

	address = (unsigned long)ptr;
	print_ch('0');
	print_ch('x');
	print_x(address, 'x');
}

// int main()
// {
// 	char i = 'a';
// 	print_p(&i);
// 	printf("\n%p\n", &i);
// }