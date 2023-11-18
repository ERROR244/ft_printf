/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:45:45 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/18 11:48:31 by ksohail-         ###   ########.fr       */
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

int	print_x(unsigned long n, char c)
{
	char				str[20];
	unsigned long		i;
	unsigned long		j;

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

// int main()
// {
// 	void *ptr = "knke";
// 	printf("%d \n", print_x((unsigned int)ptr, 'x'));
// 	printf("%d \n", printf("%x", (unsigned int)ptr));
// }

// int main()
// {
// 	unsigned int testCases[] = {0, 1, 15,255, 4095, 65535, 123456, 4294967295U};

//     printf("('X'):\n\n");
//     for (int i = 0; i < sizeof(testCases) / sizeof(testCases[0]); ++i) {
//         printf("%u  %X", testCases[i], testCases[i]);
//         printf("\n");
// 		printf("\n");
//         print_x(testCases[i], 'X');
//         printf("\n");
// 		printf("\n");
//     }

//     printf("\n('x'):\n\n");
//     for (int i = 0; i < sizeof(testCases) / sizeof(testCases[0]); ++i) {
//         printf("%u  %x", testCases[i], testCases[i]);
//         printf("\n");
// 		printf("\n");
//         print_x(testCases[i], 'x');
//         printf("\n");
// 		printf("\n");
//     }

//     return 0;
// }