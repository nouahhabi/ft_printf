/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:29:21 by nouahhab          #+#    #+#             */
/*   Updated: 2022/02/02 21:33:51 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_str (char *str, int *count)
{
	int	i;
	
	if (!str)
		return ;
	i = 0;
	while (s[i])
	{
		ft_print_char(s[i], &count);
		i++;
	}
	(*count)++;
}
