/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:42:57 by nkietwee          #+#    #+#             */
/*   Updated: 2022/10/30 13:42:57 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putdec(int number);
int	ft_putudec(unsigned int number);
int	ft_counthexa(unsigned int number);
int	ft_puthexupper(unsigned int number);
int	ft_puthexlower(unsigned int number);
int	ft_putpt(unsigned long long number);
#endif
