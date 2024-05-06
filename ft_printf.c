/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:16:03 by dasal             #+#    #+#             */
/*   Updated: 2024/05/04 13:22:54 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_putptr(va_arg(args, uintptr_t)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'x')
		return (ft_putnbr_hexl(va_arg(args, int)));
	else if (format == 'X')
		return (ft_putnbr_hexu(va_arg(args, int)));
	else if (format == '%')
		return (ft_putchar('%'));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += ft_format(format[i + 1], args);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end (args);
	return (count);
}
/* 
int	main(void)
{
	int	address = 42;

	int	ft_result = ft_printf("name is %s and %d,%u,%x,%X years %%old%c living\
	at %p\n", "Laura", 23, 23, 23, 23, '!', &address);
	int	p_result = printf("name is %s and %d,%u,%x,%X years %%old%c living at\
	%p\n", "Laura", 23, 23, 23, 23, '!', &address);
	
	ft_printf("%d\n", ft_result);
	printf("%d\n", p_result);
}
 */