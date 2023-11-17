/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:55:37 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/17 22:10:42 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(void *ptr)
{
	unsigned long	address;
	int len;

	len = 0;
	address = (unsigned long)ptr;
	len += print_ch('0');
	len += print_ch('x');
	len += print_x(address, 'x');
	return (len);
}

// int main()
// {
//     void *ptr = (void *)0x12345678;

//     int printf_p_return = print_p(ptr);
//     int printf_return = printf("%p", ptr);

// 	printf("\n");
//     printf("printf return: %d, print_p return: %d \n", printf_return, printf_p_return);

//     return 0;
// }
