/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 00:01:24 by nouahhab          #+#    #+#             */
/*   Updated: 2022/03/18 00:34:07 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned int n, char c, int *count)
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
		ft_print_hex(n / 16, c, count);
		ft_print_hex(n % 16, c, count);
	}
}
