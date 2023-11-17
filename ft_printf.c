/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2023/11/17 19:26:24 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void check_and_print(char *str, va_list lst)
{
	if (ft_strncmp("%c", str, 2) == 0)
		print_ch(va_arg(lst, int));
	else if (ft_strncmp("%d", str, 2) == 0)
		print_i_d(va_arg(lst, int));
	else if (ft_strncmp("%i", str, 2) == 0)
		print_i_d(va_arg(lst, int));
	else if (ft_strncmp("%p", str, 2) == 0)
		print_p(va_arg(lst, void *));
	else if (ft_strncmp("%s", str, 2) == 0)
		print_str(va_arg(lst, char *));
	else if (ft_strncmp("%u", str, 2) == 0)
		print_u(va_arg(lst, unsigned int));
	else if (ft_strncmp("%x", str, 2) == 0)
		print_x(va_arg(lst, unsigned long), 'x');
	else if (ft_strncmp("%X", str, 2) == 0)
		print_x(va_arg(lst, unsigned long), 'X');
	else if (ft_strncmp("%%", str, 2) == 0)
		print_ch('%');
		
}

int	ft_printf(const char *str, ...)
{
	int i;
	va_list	lst;
	va_start(lst, str);
	char ptr[3];
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			ptr[0] = str[i];
			ptr[1] = str[i + 1];
			ptr[2] = '\0';
			check_and_print(ptr, lst);
			i += 2;
		}
		else
		{
			print_ch(str[i]);
			i++;
		}
	}
	va_end(lst);
	return (0);
}

int main()
{
    int i;
    int ii;
	int j;
    unsigned int k;
    char c;
    char str[100];

	ft_printf("character :");
    scanf(" %c", &c);
    printf("Character: %c \n", c);
    ft_printf("Character: %c \n", c);
	

	ft_printf("intger(hex)(decimal) :");
    scanf("%d", &i);
    printf("Integer (decimal): %d \n", i);
    ft_printf("Integer (decimal): %d \n", i);
    
	printf("Integer (hex): %x \n", i);
    ft_printf("Integer (hex): %x \n", i);
	

	ft_printf("-intger(hex)(decimal) :");
    scanf("%d", &ii);
    printf("Negative Integer (decimal): %d \n", ii);
    ft_printf("Negative Integer (decimal): %d \n", ii);

    printf("-Integer (-hex): %x \n", ii);
    ft_printf("-Integer (-hex): %x \n", ii);


	ft_printf("string (his address) :");
    scanf("%s", str);
    printf("String: %s \n", str);
    ft_printf("String: %s \n", str);

    printf("Pointer: %p \n", str);
    ft_printf("Pointer: %p \n", str);


	ft_printf("unsigned intger :");
    scanf("%u", &k);
    printf("Unsigned Integer: %u \n", k);
    ft_printf("Unsigned Integer: %u \n", k);


	printf("name: ");
	scanf("%s", str);

	printf("age :");
	scanf("%d", &i);

	printf("random number: ");
	scanf("%d", &j);

	ft_printf("Hello, %s! You are %d years old, and your random number is %d. Cheers! \n", str, i, j);
	printf("Hello, %s! You are %d years old, and your random number is %d. Cheers! \n", str, i, j);

    return 0;
}
