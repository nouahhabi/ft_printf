/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:11:53 by nouahhab          #+#    #+#             */
/*   Updated: 2022/03/18 00:33:01 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_num(int n, int *count)
{
	if (n == -2147483648)
		ft_print_str("-2147483648", count);
	else if (n < 0)
	{
		ft_print_char('-', count);
		ft_print_num(-n, count);
	}
	else if (n > 9)
	{
		ft_print_num(n / 10, count);
		ft_print_char(n % 10 + '0', count);
	}
	else
		ft_print_char(n + '0', count);
}
