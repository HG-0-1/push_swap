/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:16:35 by helfayez          #+#    #+#             */
/*   Updated: 2025/09/02 17:43:39 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

int		count_n_h(unsigned int n);
int		ft_putchar(char c);
void	ft_putnbr_hc(unsigned long long n);
void	ft_putnbr_hs(unsigned long long n);
int		ft_putnbr_u(unsigned int n);
void	ft_putnbr(int n);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *s);
int		n_count(int n);
int		putp(unsigned long long p);
int		u_count_n(unsigned int n);
int		ft_printf(const char *format, ...);
void	ft_putnbr_hp(unsigned long long n);
int		count_n_hp(unsigned long long n);
#endif