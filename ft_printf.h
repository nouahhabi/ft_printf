/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:17:41 by nouahhab          #+#    #+#             */
/*   Updated: 2022/03/18 00:37:10 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_print_char(char c, int *count);
void	ft_print_str(char *str, int *count);
void	ft_print_hex(unsigned int n, char c, int *count);
void	ft_print_num(int n, int *count);
void	ft_print_unsigned(unsigned int n, int *count);
void	ft_print_p(void *p, int *count);

#endif
