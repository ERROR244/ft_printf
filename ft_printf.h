/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <ksohail-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:35:27 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/17 21:22:39 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int 	print_ch(char c);
int 	print_str(char *str);
int 	print_i_d(int i);
int 	print_u(unsigned int i);
int 	print_x(unsigned long n, char c);
int     print_p(void *ptr);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_printf(const char *str, ...);
int     ft_strlen(const char *s);

#endif
