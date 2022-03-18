/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:52:14 by nouahhab          #+#    #+#             */
/*   Updated: 2022/03/18 00:52:02 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check(va_list lst, char str, int *count)
{
	if (str == 'c')
		ft_print_char (va_arg(lst, int), count);
	else if (str == 's')
		ft_print_str(va_arg(lst, char *), count);
	else if (str == '%')
		ft_print_char('%', count);
	else if (str == 'u')
		ft_print_unsigned(va_arg(lst, unsigned int), count);
	else if (str == 'd' || str == 'i')
		ft_print_num(va_arg(lst, int), count);
	else if (str == 'x' || str == 'X')
		ft_print_hex(va_arg(lst, unsigned int), str, count);
	else if (str == 'p')
		ft_print_p(va_arg(lst, void *), count);
	else
		ft_print_char(str, count);
}

int	ft_printf(const char *str, ...)
{
	va_list	lst;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(lst, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_check(lst, str[i], &count);
		}
		else
			ft_print_char(str[i], &count);
		i++;
	}
	va_end(lst);
	return (count);
}
