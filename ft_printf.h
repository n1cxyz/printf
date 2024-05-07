/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:45:13 by dasal             #+#    #+#             */
/*   Updated: 2024/05/04 12:47:09 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdint.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putptr(uintptr_t ptr);
int		ft_putchar(char c);
int		ft_putstr(char const *str);
int		ft_putnbr(long n);
int		ft_putunbr(unsigned int n);
int		ft_putnbr_hexl(unsigned int n);
int		ft_putnbr_hexu(unsigned int n);
size_t	ft_strlen(char const *str);

#endif