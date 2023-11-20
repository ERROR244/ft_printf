/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:40:31 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/20 09:14:35 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*fill(char *ptr, long long n, int x)
{
	int	i;

	i = n;
	if (n < 0)
		n *= -1;
	if (x >= 0)
	{
		ptr[x] = (n % 10) + '0';
		n /= 10;
		fill(ptr, n, --x);
	}
	if (i < 0)
		ptr[0] = '-';
	return (ptr);
}

static void	nor_line(long long *n, int *x)
{
	if (*n < 0)
	{
		*x += 1;
		*n *= -1;
	}
}

char	*ft_itoa(long long n)
{
	char		*ptr;
	long long	i;
	int			x;

	x = 0;
	i = n;
	nor_line(&n, &x);
	n /= 10;
	x++;
	while (n != 0)
	{
		n /= 10;
		x++;
	}
	ptr = (char *)malloc((x + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[x] = '\0';
	x--;
	return (fill(ptr, i, x));
}
