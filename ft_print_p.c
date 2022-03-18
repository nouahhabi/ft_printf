/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:41:46 by nouahhab          #+#    #+#             */
/*   Updated: 2022/03/18 00:39:46 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_hex_long(unsigned long n, char c, int *count)
{
	if (n <= 15)
	{
		if (c == 'x')
			write (1, &"0123456789abcdef"[n], 1);
		else if (c == 'X')
			write (1, &"0123456789ABCDEF"[n], 1);
		(*count)++;
	}
	else
	{
		ft_print_hex_long(n / 16, c, count);
		ft_print_hex_long(n % 16, c, count);
	}
}


void	ft_print_p(void *p, int *count)
{
	unsigned long	a;

	a = 0;
	if (p)
		a = (unsigned long)p;
	ft_print_str("0x", count);
	ft_print_hex_long(a, 'x', count);
}
