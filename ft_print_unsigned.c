/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:30:54 by nouahhab          #+#    #+#             */
/*   Updated: 2022/03/18 00:36:55 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(unsigned int n, int *count)
{
	if (n > 9)
	{
		ft_print_unsigned(n / 10, count);
		ft_print_char(n % 10 + '0', count);
	}
	else
		ft_print_char(n + '0', count);
}
