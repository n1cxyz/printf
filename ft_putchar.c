/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:48:25 by dasal             #+#    #+#             */
/*   Updated: 2024/05/04 12:50:38 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
/*
int	main(void)
{
	printf("%d\n", ft_putchar('h'));
}*/
