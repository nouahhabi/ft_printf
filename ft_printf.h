/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:17:41 by nouahhab          #+#    #+#             */
/*   Updated: 2022/02/03 00:02:15 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void 	ft_print_char (char c,int *count);
void	ft_print_str (char *str, int *count);
void	ft_printf_hex(unsigned int n, char c, int count);

