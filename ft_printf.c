/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:52:14 by nouahhab          #+#    #+#             */
/*   Updated: 2022/02/02 22:57:23 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_check(va_list lst, char str, int *count)
{
	if(str == 'c')
		ft_print_char (va_arg(lst, int),&count);
	else if (str == 's')
		ft_print_str (va_arg(lst, char *), &count);
	else if (str == 'p')
		 
	else if (str == '%')
	
	else if (str == 'u')

	else if (str == 'd' || str == 'i')

	else if (str == 'x' || str == 'X')
	
}

int	ft_printf(const char *str, ...)
{
	va_list lst;
	int	i;
	int	*count;

	va_start(lst, str);
	while(str[i])
	{
		if(str[i] = '%')
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
