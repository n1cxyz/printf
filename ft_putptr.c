/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:13:32 by dasal             #+#    #+#             */
/*   Updated: 2024/05/06 13:13:35 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "ft_printf.h"

static size_t	ft_intlen(uintptr_t n)
{
	size_t	count;

	count = 0;
	while (n != 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}

static void	ft_writeptr(uintptr_t ptr)
{
	if (ptr > 15)
	{
		ft_writeptr(ptr / 16);
		ft_writeptr(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_putchar(ptr + '0');
		else
			ft_putchar(ptr - 10 + 'a');
	}
}

int	ft_putptr(uintptr_t ptr)
{
	int			count;
	uintptr_t	nb;

	count = 0;
	if (ptr == 0)
		return (count += write(1, "(nil)", 5));
	nb = ptr;
	count = write(1, "0x", 2);
	ft_writeptr(ptr);
	count += ft_intlen(nb);
	return (count);
}
/* 
int	main(void)
{
	int x = 0;
	uintptr_t address = (uintptr_t)&x;

	printf("x is : %p\n", &x);
	ft_putptr(address);
}
 */