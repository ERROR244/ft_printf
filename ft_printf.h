/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:35:27 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/23 10:13:39 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
#include <stdint.h>
# include <unistd.h>

int		print_ch(char c);
int		print_str(char *str);
int		print_i_d(long long i);
int		print_u(unsigned int i);
int		print_x(unsigned int n, char c);
int		print_p(void *ptr);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_printf(const char *str, ...);
char	*ft_itoa(long long n);
int		ft_strlen(const char *s);

#endif
