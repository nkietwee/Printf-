/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:09:05 by nkietwee          #+#    #+#             */
/*   Updated: 2022/10/30 14:01:29 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_format(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += (ft_putchar(va_arg(args, int)));
	else if (c == 'p')
	{
		len += ft_putstr("0x");
		len += (ft_putpt(va_arg(args, unsigned long long)));
	}
	else if (c == 's')
			len += (ft_putstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
			len += (ft_putdec(va_arg(args, int )));
	else if (c == 'u')
			len += (ft_putudec(va_arg(args, int )));
	else if (c == 'x')
			len += (ft_puthexlower(va_arg(args, unsigned int )));
	else if (c == 'X')
			len += (ft_puthexupper(va_arg(args, unsigned int)));
	else if (c == '%')
		len += (write (1, "%", 1));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ans;
	va_list	args;

	va_start (args, format);
	i = 0;
	ans = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ans += ft_printf_format(format[i], args);
		}
		else
				ans += ft_putchar(format[i]);
		i++;
	}
	va_end (args);
	return (ans);
}
