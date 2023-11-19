/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:47:13 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/19 21:13:36 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_and_print(char *str, va_list lst)
{
	int	return_len;

	return_len = 0;
	if (ft_strncmp("%c", str, 2) == 0)
		return_len = print_ch(va_arg(lst, int));
	else if (ft_strncmp("%d", str, 2) == 0)
		return_len = print_i_d(va_arg(lst, int));
	else if (ft_strncmp("%i", str, 2) == 0)
		return_len = print_i_d(va_arg(lst, int));
	else if (ft_strncmp("%p", str, 2) == 0)
		return_len = print_p(va_arg(lst, void *));
	else if (ft_strncmp("%s", str, 2) == 0)
		return_len = print_str(va_arg(lst, char *));
	else if (ft_strncmp("%u", str, 2) == 0)
		return_len = print_u(va_arg(lst, unsigned int));
	else if (ft_strncmp("%x", str, 2) == 0)
		return_len = print_x(va_arg(lst, unsigned long), 'x');
	else if (ft_strncmp("%X", str, 2) == 0)
		return_len = print_x(va_arg(lst, unsigned long), 'X');
	else if (ft_strncmp("%%", str, 2) == 0)
		return_len = print_ch('%');
	return (return_len);
}

int	ft_printf(const char *str, ...)
{
	int		return_len;
	int		i;
	int		k;
	va_list	lst;
	char	ptr[3];

	va_start(lst, str);
	i = 0;
	return_len = 0;
	while (str[i] != '\0')
	{
		k = 0;
		if (str[i] == '%')
		{
			ptr[0] = str[i];
			ptr[1] = str[i + 1];
			ptr[2] = '\0';
			k = check_and_print(ptr, lst);
			i += 2;
		}
		else
			k = print_ch(str[i++]);
		if (k < 0)
			return (k);
		return_len += k;
	}
	va_end(lst);
	return (return_len);
}

// int main()
// {
// 	int i = ft_printf("\001\002\007\v\010\f\r\n");
// 	int a = printf("\001\002\007\v\010\f\r\n");

// 	printf("%d \n", i);
// 	printf("%d \n", a);
// }
// ///////////////return test////////////////

// // int main()
// // {
// //     int i;
// //     int ii;
// //     int j;
// //     unsigned int k = 4294967295;
// //     char c;
// //     char str[100];

// //     int ft_printf_return ;
// //     int printf_return ;

// //     ft_printf_return (= ft_printf("Character: %c \n", 'A'));
// //     printf_return (= printf("Character: %c \n", 'A'));
// //     printf("ft_printf return: %d, printf return: %d\n", ft_printf_return,
// 	printf_return);

// //     ft_printf_return (= ft_printf("Integer (decimal): %d \n", 12345));
// //     printf_return (= printf("Integer (decimal): %d \n", 12345));
// //     printf("ft_printf return: %d, printf return: %d\n", ft_printf_return,
// 	printf_return);

// //     ft_printf_return (= ft_printf("Negative Integer (decimal): %d \n",
// 		-9876));
// //     printf_return (= printf("Negative Integer (decimal): %d \n", -9876));
// //     printf("ft_printf return: %d, printf return: %d\n", ft_printf_return,
// 	printf_return);

// //     ft_printf_return (= ft_printf("Integer (hex): %x \n", 255));
// //     printf_return (= printf("Integer (hex): %x \n", 255));
// //     printf("ft_printf return: %d, printf return: %d\n", ft_printf_return,
// 	printf_return);

// //     ft_printf_return (= ft_printf("String: %s \n", "Hello, World!"));
// //     printf_return (= printf("String: %s \n", "Hello, World!"));
// //     printf("ft_printf return: %d, printf return: %d\n", ft_printf_return,
// 	printf_return);

// //     ft_printf_return (= ft_printf("Unsigned Integer: %u \n", k));
// //     printf_return (= printf("Unsigned Integer: %u \n", k));
// //     printf("ft_printf return: %d, printf return: %d\n", ft_printf_return,
// 	printf_return);

// //     ft_printf_return (= ft_printf("Pointer: %p\n", (void *)0x12345678));
// //     printf_return (= printf("Pointer: %p\n", (void *)0x12345678));
// //     printf("ft_printf return: %d, printf return: %d\n", ft_printf_return,
// 	printf_return);

// //     ft_printf_return (= ft_printf("Custom Test: %s %i %d %% khalil \n",
// 		"Sohail", 1337, 42));
// //     printf_return (= printf("Custom Test: %s %i %d %% khalil \n",
//  						"Sohail",
// 		1337, 42));
// //     printf("ft_printf return: %d, printf return: %d\n", ft_printf_return,
// 	printf_return);

// //     return 0;
// // }

// /////////////testes////////////////////

// // int main()
// // {
// //     int i;
// //     int ii;
// // 	int j;
// //     unsigned int k;
// //     char c;
// //     char str[100];

// // 	ft_printf("character :");
// //     scanf(" %c", &c);
// //     printf("Character: %c \n", c);
// //     ft_printf("Character: %c \n", c);

// // 	ft_printf("intger(hex)(decimal) :");
// //     scanf("%d", &i);
// //     printf("Integer (decimal): %d \n", i);
// //     ft_printf("Integer (decimal): %d \n", i);

// // 	printf("Integer (hex): %x \n", i);
// //     ft_printf("Integer (hex): %x \n", i);

// // 	ft_printf("-intger(hex)(decimal) :");
// //     scanf("%d", &ii);
// //     printf("Negative Integer (decimal): %d \n", ii);
// //     ft_printf("Negative Integer (decimal): %d \n", ii);

// //     printf("-Integer (-hex): %x \n", ii);
// //     ft_printf("-Integer (-hex): %x \n", ii);

// // 	ft_printf("string (his address) :");
// //     scanf("%s", str);
// //     printf("String: %s \n", str);
// //     ft_printf("String: %s \n", str);

// //     printf("Pointer: %p \n", str);
// //     ft_printf("Pointer: %p \n", str);

// // 	ft_printf("unsigned intger :");
// //     scanf("%u", &k);
// //     printf("Unsigned Integer: %u \n", k);
// //     ft_printf("Unsigned Integer: %u \n", k);

// // 	printf("name: ");
// // 	scanf("%s", str);

// // 	printf("age :");
// // 	scanf("%d", &i);

// // 	printf("random number: ");
// // 	scanf("%d", &j);

// // 	ft_printf("Hello, %s! You are %d years old, and your random number is
// // 		%d. Cheers! \n", str, i, j);
// // // 	printf("Hello, %s! You are %d years old, and your random number is
// // 		%d. Cheers! \n", str, i, j);

// // //     return 0;
// // // }
